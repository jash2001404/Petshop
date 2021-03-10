//Functions and of manager subclass of human
#include <iostream>
#include <string>
#include "manager.h"
using namespace std;

manager::manager()
{}

manager::manager(string storename,string storeaddress, string DOB, int salary_level ):human(storename,storeaddress,DOB,salary_level)
{

}

//Add new animal function allows for animals to be added
string manager::Addnewanimal()
{
	cout<<"what type of pet did you purchase today? ";
	cin>>animallotnameforadding;
	return animallotnameforadding;
}
//Sell new animal function allows for animals to be removed
string manager::Sellanimal()
{
	cout<<"what type of pet did you sell today? ";
	cin>>animallotnameforselling;
	return animallotnameforselling;
}
manager::~manager()
{}