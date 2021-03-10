#include <iostream>
#include "enclosure.h"
#include <string>
using namespace std;

enclosure::enclosure()
{}
//inheriting from petshop
enclosure::enclosure(string storename,string storeaddress):petshop(storename,storeaddress)
{
	//cout<<"enclosure details : ";
}
//using virtual, hence having it own version of moneytaker
void enclosure::moneytaker(int moneygiven)
{
	s = moneygiven+s;
	//cout<<"Thankyou for a sale of $"<<moneygiven <<endl;
}
enclosure::~enclosure()
{}