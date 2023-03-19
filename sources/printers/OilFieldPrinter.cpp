#include <iostream>
#include "../../headers/printers/OilFieldPrinter.h"
#include "../../headers/printers/IBoreholePrinter.h"

void OilFieldPrinter::print(OilField oilField) {
    if(!oilField.getWells().empty()) {
        for (Borehole borehole : oilField.getWells()) {
            m_iBoreholePrinter.print(borehole);
        }
    }
}

OilFieldPrinter::OilFieldPrinter(IBoreholePrinter iBoreholePrinter) {
    this->m_iBoreholePrinter = iBoreholePrinter;
}

OilFieldPrinter::OilFieldPrinter() {}
