#include <iostream>
#include "headers/OilFieldManager.h"
#include "headers/wells/GasWell.h"

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Russian");
    IBoreholePrinter iBoreholePrinter;
    OilFieldManager oilFieldManager = OilFieldManager(iBoreholePrinter);
    oilFieldManager.startSimulation();

    return 0;
}

