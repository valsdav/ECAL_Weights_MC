from ROOT import TLegend

def SetLegend(pos):

    width = 0.2
    height = 0.2

    if pos == 'MR': l1 = TLegend(0.7, 0.2, 0.9, 0.4) # Middle right
    if pos == 'BR': l1 = TLegend(0.7, 0.1, 0.9, 0.3) # Bottom right
    if pos == 'BM': l1 = TLegend(0.4, 0.1, 0.6, 0.3) # Bottom middle 
    if pos == 'UM': l1 = TLegend(0.4, 0.6, 0.6, 0.8) # Upper middle 
    if pos == 'TL': l1 = TLegend(0.1, 0.7, 0.3, 0.9) # Top Left 

    #l1 = TLegend(0.65, 0.3, 0.9, 0.7) # Middle right

    #l1.SetHeader("Error Bounds") 
    return l1 