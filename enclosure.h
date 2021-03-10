//Enclosure class header with relevant attributes and functions
#include <iostream>
#include <string>
#include "petshop.h"
using namespace std;
class enclosure:public petshop
{
public:
	enclosure();
	enclosure(string storename,string storeaddress);
	
	virtual void moneytaker(int moneygiven);
	~enclosure();

};
