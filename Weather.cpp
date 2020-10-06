//Geidy Ducuara Ruiz 200419082

#include "Weather.h"
#include <iostream>
#include <iomanip>
#include <string>

#define _CRT_SECURE_NO_WARNINGS
using namespace std;

void Weather::setData(const char* date,double hi, double lo)
{
    high = hi;
    low = lo;
    strncpy_s(dateDescription, date, 6);
     
}

 void Weather::display()const
{
   
     cout << setw(10) << setfill('_') << left << dateDescription;
     cout.unsetf(ios::left);
     cout << fixed << setprecision(1) << setw(6) << high << setw(6) << low << endl;
   
}
