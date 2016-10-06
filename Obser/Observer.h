#pragma once
class CObserver
{
public:
	CObserver() {};
	~CObserver() {};
	// 
	virtual void update(int temp, int hum, int pressure) = 0;
};

