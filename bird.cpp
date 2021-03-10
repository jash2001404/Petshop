//Constructors and functions of Birds subclass of Pet
#include <string>
#include <iostream>
#include "bird.h"

using namespace std;

//default constructor
bird::bird() 
{
	
}

//standard constructor taking name, address, dateorbirth, gender, fav food. 
bird::bird(string storeaddress, string DOB, string gender, string fav_food, string fav_toy):pet(storeaddress, DOB,  gender,  fav_food)
{
	//cout << "A new bird has been added, and its ID is: " << myid << endl;
}

//Simple function executed at run, displays bird sound
void bird::makesound()
{
	cout<<""<<endl;
	cout<<"Tweet, tweet, tweet."<<endl;
	cout<<""<<endl;
}
bird::~bird() 
{
	
}