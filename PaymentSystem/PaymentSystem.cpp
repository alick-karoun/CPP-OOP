#include <iostream>
#include "CashPayment.h"
#include "CardPayment.h"
using namespace std;
int main()
{
	

    Payment* p1 = new CashPayment();
    Payment* p2 = new CardPayment();

    p1->pay();
    p2->pay();

    delete p1;   
    delete p2;
    return 0;
}

