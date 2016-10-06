#include "CurrentConditionDisplay.h"
#include<iostream>
using namespace std;


CCurrentConditionDisplay::CCurrentConditionDisplay()
{
}


CCurrentConditionDisplay::~CCurrentConditionDisplay()
{
}

void CCurrentConditionDisplay::update(int temp, int hum, int press)
{
	temperature = temp;
	humidity = hum;
	display();
}

void CCurrentConditionDisplay::display()
{
	cout << "Current conditions : " << temperature << "F degrees and " << humidity << "% humidity" << endl;
}
