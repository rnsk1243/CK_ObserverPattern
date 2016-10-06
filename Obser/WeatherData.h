#pragma once
#include"Subject.h"

class CWeatherData : public CSubject
{
	CObserver* observers[5];
	int temperature;
	int humidity;
	int pressure;
	int obsCount;
public:
	CWeatherData();
	~CWeatherData();
	// 옵저버 등록
	void registerObserver(CObserver* ob);
	void removeObserver(CObserver* ob);
	// subject상태가 변경되었을 때 모든 observer들에게 통지해주는 함수
	void notifyObservers();
	void setMeasurements(int temp, int hum, int press);
	void measurementChanged();
	int getTemperature() { return temperature; }
	int getHumidity() { return humidity; }
	int getPressure() { return pressure; }

};

