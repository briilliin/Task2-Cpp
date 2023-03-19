#include "../../headers/wells/Borehole.h"
#include "../../headers/WellType.h"

#include <utility>

Borehole::Borehole(std::string name) : name(std::move(name)) {
    this->workingStatus = false;
    this->volumeOfContent = 0;
}
void Borehole::start() {
    this->workingStatus = true;
}

void Borehole::stop() {
    this->workingStatus = false;
}

float Borehole::getVolume() {
    return this->volumeOfContent;
}

std::string Borehole::getName() {
    return this->name;
}

WellType Borehole::getType() {
    return this->wellType;
}

bool Borehole::getStatus() {
    return this->workingStatus;
}


std::string Borehole::toString() {
    std::string result = "";
    result+= "\n Well " + name;   

    if (workingStatus)
        result += " is working\n";
    else
        result += " is stopped\n";

    return result;
}

Borehole::~Borehole() {

}
