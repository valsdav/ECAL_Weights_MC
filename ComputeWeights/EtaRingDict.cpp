// The purpose of this function is to map eta -> ieta_ (eta ring going from 1 to 28)

#include <iostream>
#include <map>
#include <vector>

using namespace std;

double eta_ring_map(double eta){

    // Eta ring boundary magnitudes 
    vector<double> boundary_mags = {0.0000, 0.0870, 0.1740, 0.2610, 0.3480, 0.4350, 0.5220, 0.6090, 0.6950, 0.7830, 0.8700, 0.9570, 1.0440, 1.1310, 1.2180, 1.3050, 1.3920, 1.4790, 1.5660, 1.6530, 1.7400, 1.8300, 1.9300, 2.0430, 2.1720, 2.3220, 2.5000, 2.6500, 3.0000};

    int nr = 2* (boundary_mags.size() - 1); 
    //cout << "number of regions = " << nr << endl;
    vector<double> boundaries;

    for (int j = 0; j < nr + 1; j++){
        if (j < 28){
            boundaries.push_back(-boundary_mags.end()[-j - 1]); // - side 
        }

        else{
            boundaries.push_back(boundary_mags[j - 28]); // + side
        }

    //cout << "boundaries[" << j << "] = " << boundaries[j] << endl;

    }

    // boundaries = {-3, ..., 3}

    map<string, vector<double>> er_map; 

    string key = ""; 
    string eta_ring = "";
    
    for (int i = 0; i < nr; i ++){

            if (i < 28){
                key = to_string(i - 28);
                er_map[key];
                //er_map[key] = {};
                //er_map.insert(key);
                //er_map.insert(pair());  [key];
            }

            // else if (i == 28)
            //     continue;
            
            else{
                key = to_string(i - 27);
                er_map[key];
                //er_map[key] = {};
                //er_map.insert(key);
            }

            //cout << "key = " << key << endl;
            //cout << "min = " << boundaries[i] << endl;
            //cout << "max = " << boundaries[i+1] << endl;

            er_map[key].push_back(boundaries[i]); 
            er_map[key].push_back(boundaries[i + 1]);

            if ( eta >= er_map[key][0] && eta < er_map[key][1]){
                //cout << "eta region found\n";
                eta_ring = key;

            }

    }

    //cout << er_map["15"] << endl;
    //cout << "er_map = " << er_map << endl;

    return stod(eta_ring); 

}