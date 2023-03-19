#ifndef ___TASK2_BOREHOLE_H
#define ___TASK2_BOREHOLE_H
#include <string>
#include "../../WellType.h"

class Borehole {
protected:
    std::string name;
    WellType wellType;
    float volumeOfContent;
    //float plan;
    bool workingStatus;
public:
    Borehole(std::string name);
    virtual ~Borehole();

    void start();
    void stop();
    //void setName(std::string name);
    //void setPlan(float plan);
    //void setVolume(float  volume);
    bool getStatus();
    float getVolume();
    //float getPlan();
    WellType getType();
    std::string getName();
    std::string toString();
};


#endif
