#include "WeatherData.h"



CWeatherData::CWeatherData()
{
	obsCount = 0;
}


CWeatherData::~CWeatherData()
{
}

// ������ ���
void CWeatherData::registerObserver(CObserver* ob)
{
	observers[obsCount++] = ob;
}
void CWeatherData::removeObserver(CObserver* ob)
{

}
// subject���°� ����Ǿ��� �� ��� observer�鿡�� �������ִ� �Լ�
void CWeatherData::notifyObservers()
{
	for (int i = 0; i < obsCount; i++)
	{
		CObserver* ob = observers[i];
		ob->update(temperature, humidity, pressure);
	}
}
void CWeatherData::setMeasurements(int temp, int hum, int press)
{
	temperature = temp;
	pressure = press;
	humidity = hum;
	measurementChanged();
}
void CWeatherData::measurementChanged()
{
	notifyObservers();
}