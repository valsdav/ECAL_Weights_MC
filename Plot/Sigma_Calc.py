from ROOT import TMath, TGraphErrors
from array import array

# Input TGraph object and percentage (0 to 100)
# return TGraph object with error bars corresponding to sigma corresponding to percentage events contained in distribution.

#def Sigma_Calc(counter,x,y,xe,ye,percentage):
def Sigma_Calc(g,counter,x,y,xe,ye,percentage):
    print'Creating TGraph with new uncertainty band'
    # sigma factor. What to multiply uncertainties by, assuming current uncertainties are 1 sigma. 
    print'percentage/100. = ',percentage/100.
    sf = TMath.ErfInverse(percentage/100.)*TMath.Sqrt(2) # sigma value for desired percentage events contained in distribution 
    #print'sf = ',sf 

    for i in range(counter - 1):
        ye[i] = ye[i]*sf

    ng = TGraphErrors(counter - 1, x, y, xe, ye)

    ng.SetMarkerStyle(g.GetMarkerStyle())
    ng.SetLineStyle(g.GetLineStyle())
    ng.SetMarkerColor(g.GetMarkerColor())
    ng.SetLineColor(g.GetLineColor())
    ng.SetName(g.GetName())

    if percentage == 90: ng.SetFillColor(g.GetFillColor() + 2)
    if percentage == 99.5: ng.SetFillColor(g.GetFillColor() + 4)
    ng.SetFillStyle(g.GetFillStyle())

    return ng