import argparse
import pandas as pd
import numpy as np

''' 
This script simulate the loss of precision in decimal weights given by 
the encoding. 

Author: William Richard Smith 2019
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--input", type=str, help="DOF file", required=True)
parser.add_argument("-o", "--output", type=str, help="DOF file", required=True)
args = parser.parse_args()

#Decimal weights to encoded weights
def decimal_to_encoded(weights):
    enc_weights_not_corrected = [0]*5
    for count, w in enumerate(weights):
        if w >0:
            encodedw = w*64
            encodedw = int(round(encodedw))
            enc_weights_not_corrected[count] = encodedw
        else:
            encodedw = w*64
            encodedw = abs(encodedw)
            encodedw = int(round(encodedw))
            encodedw = 128 - encodedw
            enc_weights_not_corrected[count] = encodedw
            
    return enc_weights_not_corrected

#Encoded weights back to decimals to look at differences
def encoded_to_decimal(enc_weights_not_corrected):
    back_weights = [0]*5
    for count, encw in enumerate(enc_weights_not_corrected):
        if encw > 63:
            encw = -(128 -encw)
        back_weights[count] = encw/64
    
    return back_weights

#Performs a correction to encoded weights that don't sum to 256
def correction(enc_weights_not_corrected, back_weights):
    diff = 256 - sum(enc_weights_not_corrected)
    weightdiff = np.subtract(weights, back_weights)
    if diff>0 and diff <6:
        #weight(s) need increasing. Sort weightdiff smallest -> largest, then select diff biggest
        pos = np.argsort(weightdiff)[-diff:]
        for k in pos:
            enc_weights_not_corrected[k] = enc_weights_not_corrected[k] + 1   
    elif diff< 0 and diff> -6:
        #weight(s) need decreasing. Sort weightdiff smallest -> largest, then select diff smallest
        d = abs(diff)
        pos = np.argsort(weightdiff)[:d]
        for k in pos:
            enc_weights_not_corrected[k] = enc_weights_not_corrected[k] - 1                     
    else:
        enc_weights_not_corrected = [0]*5
        print("\nError. Sum of encoded weights differ from 256 by more than 5. Needs more investigation- dodgy numbers?")
        print("The encoded weights for this strip have been set to 0")
    
    return enc_weights_not_corrected


def get_encoded_corrected_weights(weights):
    #Encodes the decimal weights
    enc_weights_not_corrected = decimal_to_encoded(weights)
    
    #Calculates the decimal weights from the encoded ones - result will be one of the 1/64 allowable weights
    back_weights = encoded_to_decimal(enc_weights_not_corrected)
    
    #Check if sum =256, if not correction is performed on the weight(s) that are furthest from the weights they were originally describing
    if sum(enc_weights_not_corrected) != 256:
        enc_weights_corrected = correction(enc_weights_not_corrected, back_weights)
    else:
        enc_weights_corrected = enc_weights_not_corrected

    return enc_weights_corrected


if __name__ == "__main__":
    dof = pd.read_csv(args.input , sep=",")
    print("Get weights after encoding loss of precision...")
    for i, row in dof.iterrows():
        weights = [row.w1, row.w2, row.w3, row.w4,  row.w5]
        print(weights)
        encoded = get_encoded_corrected_weights(weights)

        backtodecimal = encoded_to_decimal(encoded)

        dof.at[i, 'w1c'] = backtodecimal[0]
        dof.at[i, 'w2c'] = backtodecimal[1]
        dof.at[i, 'w3c'] = backtodecimal[2]
        dof.at[i, 'w4c'] = backtodecimal[3]
        dof.at[i, 'w5c'] = backtodecimal[4]
        dof.at[i, 'encw1'] = encoded[0]
        dof.at[i, 'encw2'] = encoded[1]
        dof.at[i, 'encw3'] = encoded[2]
        dof.at[i, 'encw4'] = encoded[3]
        dof.at[i, 'encw5'] = encoded[4]

    dof.to_csv(args.output, index=False, sep=",", float_format='%g')
    
    print("Done")