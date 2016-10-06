#pragma once
#include "Observer.h"
#include"Display.h"
#include"WeatherData.h"
class CStatisticDisplay :
	public CObserver, public CDisplay
{
	int Avg;
	int Max;
	int Min;
	int oldTemp;
	CWeatherData* wData;
public:
	CStatisticDisplay();
	~CStatisticDisplay();
	CStatisticDisplay(CWeatherData* data)
	{
		// 처음 등록된 것이면
		if (wData == nullptr)
		{
			
			oldTemp = -1;
		}
		wData = data;
		wData->registerObserver(this);
		int Avg = 0;
		int Max = 0;
		int Min = 0;
	}

	void update(int temp, int hum, int press);
	void display();

};

