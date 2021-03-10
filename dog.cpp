//Constructors and functions of Dog subclass of Pet
#include <string>
#include <iostream>
#include "dog.h"

using namespace std;

//default constructor
dog::dog() 
{
	
}

//standard constructor taking name, address, dateorbirth, gender, fav food. 
dog::dog(string storeaddress, string DOB, string gender, string fav_food, string fav_toy):pet(storeaddress,  DOB,  gender,  fav_food)
{
	dogfavtoy=fav_toy;
	//cout << "A new dog has been added, and its ID is: " << myid << endl;
}

//Simple function executed at run time, displays dog name and dog toy.
void dog::playwithtoy()
{
    cout << name << " is playing with " << dogfavtoy << endl;
}

//Simple function executed at run, displays dog sound
void dog::makesound() //function to add
{
	cout<<""<<endl;
	cout<<"Bark, bark, bark."<<endl;
	cout<<""<<endl;
}
dog::~dog() 
{
	
}