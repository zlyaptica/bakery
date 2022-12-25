#ifndef STATS
#define STATS

#include <iostream>
#include "shift.h"
#include <list>

using namespace std;

class Stats {
private:
    list<Shift*> shiftRegister; // список смен
    list<Shift*>::iterator iterShift;
    int cashDesk; // касса магазина
public:
    Stats();
    ~Stats();
    void CalculateSalaries(); // считаем с кассы зп
    void MakeReport(); // считаем прибыль, выводим суммарную выручку и траты на закупку
 };

#endif // STATS

