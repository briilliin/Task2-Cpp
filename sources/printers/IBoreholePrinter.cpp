#include <iostream>
#include "../../headers/printers/IBoreholePrinter.h"

IBoreholePrinter::IBoreholePrinter() {

}

void IBoreholePrinter::print(Borehole borehole) {
    std::cout << borehole.toString() << std::endl;
}


void IBoreholePrinter::print(int id, Borehole borehole) {
    std::cout << borehole.toString() << std::endl;
}

void IBoreholePrinter::print(std::vector<Borehole> boreholes) {
    for (int i = 0; i < boreholes.size(); i++){
        print(boreholes[i]);
    }
}
