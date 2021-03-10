#include <iostream>
#include <string>
#include "caretaker.h"
using namespace std;

caretaker::caretaker()
{
	name = "This caretaker is missing a name";
	address = "This caretaker is missing an address";
}

caretaker::caretaker(string storename,string storeaddress, string DOB, int salary_level ):human(storename,storeaddress,DOB,salary_level)
{
	
}

//function prints out that the animal has been fed
void caretaker::feed_animal()
{
	cout<<"caretaker gives food"<<endl;
}
//function prints out that the animal has been cleaned
void caretaker::care_for_animal()
{
	cout<<"caretaker cleans the animal"<<endl;
}
caretaker::~caretaker()
{
}