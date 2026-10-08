#include "CashPayment.h"
#include <iostream>
using namespace std;

void CashPayment::pay() {
	cout << "Paying with cash" << endl;
}

CashPayment::CashPayment() {
	cout << "CashPayment constructor called" << endl;
}

CashPayment::~CashPayment() {
	cout << "CashPayment destructor called" << endl;
}