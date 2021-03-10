//Petshop class
#include <iostream>
#include "petshop.h"
#include <string>
using namespace std;
 int petshop::real_s = 0;

petshop::petshop()
{}
petshop::petshop(string storeaddress)
{
	address=storeaddress;
}
petshop::petshop(string storename,string storeaddress)
{
	//cout<<"Welcome to the petshop"<<endl; 				
	name=storename;
	address=storeaddress;
	s=real_s; 
}

string petshop:: showname()//dispalys the name of the object
{
    return name;
}
string petshop::showaddress()
{
	return address;
}
void petshop::moneytaker(int moneygiven) 		//function to keep track of money recieved by the particular object.
{
	s = moneygiven+s;
	//cout<<"Money exchanged is: "<<moneygiven <<endl;
}

int petshop::personalsales()		//shows personal sales of a particular part						//there are a total of 3 places to pay cash:enclosure,foodstore,petstore counter.
{
	return s;
}

int petshop::dailysales(int foodsales,int animalsales,int petstorecountersales)		//function to return total revenue(from all cash counters) fo the day.
{

	
	int sum = foodsales+animalsales+petstorecountersales;
	return sum;
}
petshop::~petshop()//deconstructor
{}
