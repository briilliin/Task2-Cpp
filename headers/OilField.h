#ifndef ___TASK2_OILFIELD_H
#define ___TASK2_OILFIELD_H


#include <vector>
#include <string>
#include "wells/Borehole.h"

class OilField {
private:
    float gasVolume;
    float waterVolume;
    float oilVolume;
    float totalVolume;
    std::vector<Borehole> wells;

public:
    OilField(float gasVolume, float voterVolume, float oilVolume);
    OilField();
    std::vector<Borehole> getWells();
    void addWell(Borehole borehole);
    void addWell(std::string name, WellType type);
    void removeWell(std::string name);
    void stopWell(std::string name);
    void startWell(std::string name);
    void correctVolume(Borehole borehole);
    std::vector<Borehole> selectByName(std::string name);
};


#endif