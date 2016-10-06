#include "ForecastDisplay.h"
#include<iostream>
using namespace std;


CForecastDisplay::CForecastDisplay()
{
}


CForecastDisplay::~CForecastDisplay()
{
}

void CForecastDisplay::update(int temp, int hum, int press)
{
	if (temp < sunny && hum < rainy)
	{
		weather = "cool";
	}
	else if (temp > cool && hum < rainy)
	{
		weather = "sunny";
	}
	else if (hum > rainy)
	{
		weather = "rainy";
	}
	display();
}

void CForecastDisplay::display()
{
	cout << "Forecast : " << weather << " weather" << endl;
}
