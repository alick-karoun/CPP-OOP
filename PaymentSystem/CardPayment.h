#pragma once
#include "Payment.h"
class CardPayment:public Payment{
public:
	void pay() override;
	CardPayment();
	~CardPayment();
};

