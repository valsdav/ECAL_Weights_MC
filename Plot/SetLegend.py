from ROOT import TLegend

def SetLegend(pos):
    if pos == 'MR': l1 = TLegend(0.7, 0.2, 0.9, 0.4) # Middle right
    if pos == 'BR': l1 = TLegend(0.7, 0.1, 0.9, 0.3) # Bottom right

    #l1 = TLegend(0.65, 0.3, 0.9, 0.7) # Middle right

    l1.SetHeader("Error Bounds") 
    return l1 