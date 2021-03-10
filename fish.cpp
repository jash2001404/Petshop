//Constructors and functions of Fish subclass of Pet
#include <string>
#include <iostream>
#include "fish.h"

using namespace std;

//default constructor
fish::fish()
{
	
}

//standard constructor taking name, address, dateorbirth, gender, fav food. 
fish::fish(string storeaddress, string DOB, string gender, string fav_food, string watertype):pet(storeaddress,  DOB,  gender,  fav_food)
{
	//cout << "A new fish has been added, and its ID is: " << myid << endl;
}

//Simple function executed at run, displays fish sound, no sound.
void fish::makesound() // function to add
{
	cout<<""<<endl;
	cout<<"Gulp, gulp, gulp."<<endl;
	cout<<""<<endl;
}
fish::~fish()
{
	
}