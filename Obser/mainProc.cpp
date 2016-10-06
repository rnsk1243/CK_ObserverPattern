#include"Observer.h"
#include"Subject.h"
#include"CurrentConditionDisplay.h"
#include"ForecastDisplay.h"
#include"StatisticDisplay.h"
#include"WeatherData.h"

void main()
{
	//����
	CWeatherData* weatherData = new CWeatherData();
	// Ŭ���̾�Ʈ (���)
	CCurrentConditionDisplay* currentDisplay = new CCurrentConditionDisplay(weatherData);
	CForecastDisplay* forecastDisplay = new CForecastDisplay(weatherData);
	CStatisticDisplay* statisticDisplay = new CStatisticDisplay(weatherData);
	
	// ������ ���� ����ϸ� �˾Ƽ� Ŭ���̾�Ʈ�� ������ ����Ѵ�.
	weatherData->setMeasurements(80, 65, 30);
	weatherData->setMeasurements(82, 70, 29);
	weatherData->setMeasurements(78, 90, 29);
	weatherData->setMeasurements(10, 10, 10);

}