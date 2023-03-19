#include "../../headers/wells/InjectionWell.h"
#include "../../headers/WellType.h"

InjectionWell::InjectionWell(const std::string &name) : Borehole(name) {
    this->wellType = WellType::INJECTION;
}

