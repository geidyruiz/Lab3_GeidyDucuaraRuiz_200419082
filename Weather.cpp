//Geidy Ducuara Ruiz 200419082

#include "Weather.h"
#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

void Weather::setData(const char* date,double hi, double lo)
{
    if (date > 0)
    {
        high = hi;
        low = lo;
        strncpy_s(dateDescription, date, 8);
    }
    else
    {
        high = 0;
        low = 0;
        dateDescription[0] = '\0';
    }
}

 void Weather::display()
{
    cout.width(10);
    cout.fill('_');
}
