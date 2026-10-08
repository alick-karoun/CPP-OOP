#include "Payment.h"
#include <iostream>
using namespace std;

Payment::~Payment() {
	cout << "Payment destructor called" << endl;
}

Payment::Payment() {
	cout << "Payment constructor called" << endl;
}