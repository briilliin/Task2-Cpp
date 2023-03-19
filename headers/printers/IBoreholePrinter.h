#ifndef ___TASK2_IBOREHOLEPRINTER_H
#define ___TASK2_IBOREHOLEPRINTER_H


#include <vector>
#include "../wells/Borehole.h"

class IBoreholePrinter {
private:
    void print(int id, Borehole borehole);
public:
    IBoreholePrinter();
    virtual void print(Borehole borehole);
    virtual void print(std::vector<Borehole> boreholes);
};


#endif 
