#include <iostream>
#include "foodstore.h"
#include <string>
using namespace std;

foodstore::foodstore()
{}
//inheriting from petshop
foodstore::foodstore(string storename,string storeaddress):petshop(storename,storeaddress)
{
}
//using moneytaker, in it's own way as virtual.
void foodstore::moneytaker(int moneygiven)
{
	s = moneygiven+s;
	//cout<<"Thankyou for a sale of $"<<moneygiven <<endl;
}
foodstore::~foodstore()
{}


