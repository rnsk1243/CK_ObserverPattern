#pragma once
#include"Observer.h"

class CSubject
{
public:
	
	CSubject()
	{
	}

	~CSubject()
	{
	}
	// 옵저버 등록
	virtual void registerObserver(CObserver* ob) = 0;
	virtual void removeObserver(CObserver* ob) = 0;
	// subject상태가 변경되었을 때 모든 observer들에게 통지해주는 함수
	virtual void notifyObservers() = 0;
};

