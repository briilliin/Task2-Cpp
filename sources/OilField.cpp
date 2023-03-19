#include "../headers/OilField.h"
#include "../headers/WellType.h"
#include <algorithm>
#include <iostream>




OilField::OilField() {
    this->wells = std::vector<Borehole>();
    this->waterVolume = 0;
    this->gasVolume = 0;
    this->oilVolume = 0;
}

std::vector<Borehole> OilField::getWells() {
    return wells;
}




void OilField::addWell(Borehole borehole) {
    correctVolume(borehole);
    wells.push_back(borehole);
}




void OilField::removeWell(std::string name) {
    if (wells.empty()) return;
    bool boreholeIsFound = false;
    for (int i = 0; i < wells.size(); i++) {
        if (wells[i].getName() == name) {
            boreholeIsFound = true;
            wells.erase(wells.begin() + i);
            i--;
        }
    }
    if(!boreholeIsFound){      
        std::cout << "Not found borehole" << '\n';
    }
}

void OilField::stopWell(std::string name) {
    if (wells.empty()) return;
    bool boreholeIsFound = false;
    for (int i = 0; i < wells.size(); i++) {
        if (wells[i].getName() == name) {
            boreholeIsFound = true;
            wells[i].stop();
        }
    }
    if(!boreholeIsFound){
        std::cout << "Not found borehole" << '\n';
    }
}

void OilField::startWell(std::string name) {
    if (wells.empty()) return;
    bool boreholeIsFound = false;
    for (int i = 0; i < wells.size(); i++) {
        if (wells[i].getName() == name) {
            boreholeIsFound = true;                
            wells[i].start();
        }
    }
    if(!boreholeIsFound){
        std::cout << "Not found borehole" << '\n';
    }
}

void OilField::correctVolume(Borehole borehole) {
    float gas = 0, oil = 0, water = 0;
    if (WellType::GAS == borehole.getType()) {
        gas = borehole.getVolume();
    } else if (WellType::OIL == borehole.getType()) {
        oil = borehole.getVolume();        
    } else if (WellType::INJECTION == borehole.getType()) {
        water = borehole.getVolume();
    }
    this->oilVolume -= oil;
    this->gasVolume -= gas;
    this->waterVolume -= water;
}


std::vector<Borehole> OilField::selectByName(std::string name) {
    std::vector<Borehole> result;
    for (Borehole borehole : wells) {
        if (borehole.getName() == name) {
            result.push_back(borehole);
        }
    }
    return result;
}
