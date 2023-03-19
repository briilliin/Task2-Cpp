#ifndef ___TASK2_OILFIELDPRINTER_H
#define ___TASK2_OILFIELDPRINTER_H


#include "../OilField.h"
#include "IBoreholePrinter.h"

class OilFieldPrinter{
private:
    IBoreholePrinter m_iBoreholePrinter;

public:
    OilFieldPrinter(IBoreholePrinter iBoreholePrinter);
    OilFieldPrinter();
    void print(OilField oil_field);
};


#endif 
