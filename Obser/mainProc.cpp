#include"Observer.h"
#include"Subject.h"
#include"CurrentConditionDisplay.h"
#include"ForecastDisplay.h"
#include"StatisticDisplay.h"
#include"WeatherData.h"

void main()
{
	//서버
	CWeatherData* weatherData = new CWeatherData();
	// 클라이언트 (등록)
	CCurrentConditionDisplay* currentDisplay = new CCurrentConditionDisplay(weatherData);
	CForecastDisplay* forecastDisplay = new CForecastDisplay(weatherData);
	CStatisticDisplay* statisticDisplay = new CStatisticDisplay(weatherData);
	
	// 서버에 값을 등록하면 알아서 클라이언트가 정보를 출력한다.
	weatherData->setMeasurements(80, 65, 30);
	weatherData->setMeasurements(82, 70, 29);
	weatherData->setMeasurements(78, 90, 29);
	weatherData->setMeasurements(10, 10, 10);

}