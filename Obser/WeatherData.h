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
	// ������ ���
	void registerObserver(CObserver* ob);
	void removeObserver(CObserver* ob);
	// subject���°� ����Ǿ��� �� ��� observer�鿡�� �������ִ� �Լ�
	void notifyObservers();
	void setMeasurements(int temp, int hum, int press);
	void measurementChanged();
	int getTemperature() { return temperature; }
	int getHumidity() { return humidity; }
	int getPressure() { return pressure; }

};

