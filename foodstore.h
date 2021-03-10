//Foodstore class header with relevant attributes and functions
#include <iostream>
#include <string>
#include "petshop.h"
using namespace std;
class foodstore:public petshop
{
public:
	foodstore();
	foodstore(string storename,string storeaddress);
	
	virtual void moneytaker(int moneygiven);
	~foodstore();
};
