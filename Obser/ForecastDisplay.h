#pragma once
#include "Observer.h"
#include"Display.h"
#include"Subject.h"
#include"WeatherData.h"

#define rainy 60
#define sunny 80
#define cool 70



class CForecastDisplay :
	public CObserver, public CDisplay
{
	char* weather;
	CSubject* weatherData;
public:
	CForecastDisplay();
	~CForecastDisplay();
	CForecastDisplay(CSubject* wData)
	{
		weatherData = wData;
		weatherData->registerObserver(this);
	}
	void update(int temp, int hum, int press);
	void display();
};

