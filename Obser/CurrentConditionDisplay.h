#pragma once
#include "Display.h"
#include"Observer.h"
#include"Subject.h"
#include"WeatherData.h"
class CCurrentConditionDisplay :
	public CDisplay, public CObserver
{
	int temperature;
	int humidity;
	CSubject* weatherData;
public:
	CCurrentConditionDisplay();
	~CCurrentConditionDisplay();

	CCurrentConditionDisplay(CSubject* wData)
	{
		weatherData = wData;
		weatherData->registerObserver(this);
	}
	void update(int temp, int hum, int press);
	void display();
};

