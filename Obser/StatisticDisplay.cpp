#include "StatisticDisplay.h"
#include<iostream>
using namespace std;


CStatisticDisplay::CStatisticDisplay()
{
}


CStatisticDisplay::~CStatisticDisplay()
{
}

void CStatisticDisplay::update(int temp, int hum, int press)
{
	if (oldTemp == -1)
	{
	//	cout << "����" << endl;
		oldTemp = temp;
		Avg = (temp + oldTemp) / 2;
		Min = temp;
		Max = temp;
	}
	else {
		Avg = (temp + oldTemp) / 2;
		Min = temp >= oldTemp ? oldTemp : temp;
		Max = temp <= oldTemp ? oldTemp : temp;
		// oldTemp ����
		oldTemp = temp;
	}

	display();
}

void CStatisticDisplay::display()
{
	cout << "Avg / Max / Min temperature : " << Avg << " / " << Max << " / " << Min << endl;
}
