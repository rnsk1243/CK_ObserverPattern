#include "WeatherData.h"



CWeatherData::CWeatherData()
{
	obsCount = 0;
}


CWeatherData::~CWeatherData()
{
}

// 옵저버 등록
void CWeatherData::registerObserver(CObserver* ob)
{
	observers[obsCount++] = ob;
}
void CWeatherData::removeObserver(CObserver* ob)
{

}
// subject상태가 변경되었을 때 모든 observer들에게 통지해주는 함수
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