//Geidy Ducuara Ruiz 200419082
#pragma once
#include <iostream>
#include <string>
#include <string>
class Weather
{
private:

	char dateDescription[7];                    //pointer to string
	double high;
	double low;

public:

	void setData(const char*, double, double);
	void display();
};

