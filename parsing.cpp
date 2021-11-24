#include "parsing.h"

using std::ifstream;
using std::cout;
using std::endl;
//Empty constructor 
parsing::parsing() { }

void parsing::fillVector(string placesFileName){

    ifstream fin(placesFileName);
    
    if(!fin.is_open()){
        std::cout << "Failed to open File" << std::endl;
    }

    string name, latitude, longitude, costFactor,prioity, state;
     

    while(fin.good()){
        getline(fin, name,',');
        getline(fin, latitude, ',');
        getline(fin, longitude, ',');
        getline(fin, costFactor, ',');       
        getline(fin, prioity, ',');
        getline(fin, state, '\n');

        double lat = std::atof(latitude.c_str());
        double longi = std::atof(longitude.c_str());
        std::stringstream temp1(prioity);
        int x = 0;
        temp1 >> x;

        location temp(name,lat,longi,0,x,state);
        diffLocations.push_back(temp);
        
    }
    fin.close();
}

void parsing::fillNeihboringStates(string filename){
    ifstream fin(filename);

    if (!fin.is_open())
        std::cout << "Failed to open File" << std::endl;
    string state, neighborstate;
    while (fin.good()){
        getline(fin, state, ',');
        getline(fin, neighborstate,'\n');
        state = state + "\r";

        for (std::vector<location>::iterator it = diffLocations.begin(); it != diffLocations.end(); it++){
            if((*it).state  == state){
                (*it).neighboringStates.push_back(neighborstate);
                    break;
            }
        }
    }
    fin.close();
};