#include "../../headers/wells/GasWell.h"
#include "../../headers/WellType.h"

GasWell::GasWell(const std::string &name) : Borehole(name) {
    this->wellType = WellType::GAS;
}
