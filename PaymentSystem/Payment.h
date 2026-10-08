#pragma once
class Payment{
public:
	Payment();
	virtual void pay() = 0;
	virtual ~Payment();
};

