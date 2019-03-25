'''
Credits: William Richard Smith 2019
'''

import pandas as pd
import numpy as np

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
def correction(enc_weights_not_corrected, back_weights, i):
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
        enc_weights_not_corrected = 0
        print("\nError. Sum of encoded weights differ from 256 by more than 5. Needs more investigation- dodgy numbers?")
        print("CMSSWID of XTAL: ", data.loc[i, 'CMSSWID'])
        print("The encoded weights for this XTAL have been set to 0")
    
    return enc_weights_not_corrected

def get_decimal_after_correction(weights):
    enc_weights_not_corrected = decimal_to_encoded(weights)
    #Calculates the decimal weights from the encoded ones - result will be one of the 1/64 allowed weights
    back_weights = encoded_to_decimal(enc_weights_not_corrected)
    #Check if encoded weights sum =256. If not, correction is performed on the weight(s) that are furthest 
    #from the perfect weights they correspond to.
    if sum(enc_weights_not_corrected) != 256:
        enc_weights_corrected = correction(enc_weights_not_corrected, back_weights, i)
    else:
        enc_weights_corrected = enc_weights_not_corrected
    
    backtodecimal = encoded_to_decimal(enc_weights_corrected)
    return backtodecimal

