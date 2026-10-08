#include "CardPayment.h"
#include <iostream>
using namespace std;


void CardPayment::pay() {
	cout << "Paying with card" << endl;
}

CardPayment::CardPayment() {
	cout << "Paying with card" << endl;
}
CardPayment::~CardPayment() {
	cout << "CardPayment destructor called" << endl;
}