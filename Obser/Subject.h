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
	// ������ ���
	virtual void registerObserver(CObserver* ob) = 0;
	virtual void removeObserver(CObserver* ob) = 0;
	// subject���°� ����Ǿ��� �� ��� observer�鿡�� �������ִ� �Լ�
	virtual void notifyObservers() = 0;
};

