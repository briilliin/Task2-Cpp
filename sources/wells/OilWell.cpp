#include "../../headers/wells/OilWell.h"
#include "../../headers/WellType.h"

OilWell::OilWell(const std::string &name) : Borehole(name) {
    this->wellType = WellType::OIL;
}
