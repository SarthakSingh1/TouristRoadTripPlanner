#include "roadtripgraph.h"
#include "parsing.h"
#include "calculator.h"

RoadTripGraph::RoadTripGraph(string placesFileName, string stateFileName) {
    Parsing myParse;
    myParse.fillVector(placesFileName);
    myParse.fillNeighboringStates(stateFileName) ;
    locations = myParse.diffLocations;
}

void RoadTripGraph::createGraph() {
    adjacencyMatrix.resize(locations.size(), vector<double>(locations.size()));

    for (size_t x = 0; x < locations.size(); x++) {
        for (size_t y = 0; y < locations.size(); y++) {
            if (checkNeighbor(locations[x].state, locations[y].neighboringStates) || locations[x].state == locations[y].state) {
                adjacencyMatrix[x][y] = Calculator::calculateDistance(locations[x].latitude, locations[x].longitude,
                                                                        locations[y].latitude, locations[y].longitude);
            } else {
                adjacencyMatrix[x][y] = -1;
            }
        }
    }
}

bool RoadTripGraph::checkNeighbor(string name, vector<string> neighbors) {
    for (string n: neighbors) {
        if (name == n) {
            return true;
        }
    }
    return false;
}