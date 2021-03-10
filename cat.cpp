//Constructors and functions of Cat subclass of Pet
#include <string>
#include <iostream>
#include "cat.h"

using namespace std;

//default constructor
cat::cat() 
{

}

//standard constructor taking name, address, dateorbirth, gender, fav food. 
cat::cat(string storeaddress, string DOB, string gender, string fav_food, string fav_toy):pet(storeaddress,  DOB,  gender,  fav_food)
{
	catfavtoy=fav_toy;
	//cout << "A new cat has been added, and its ID is: " << myid << endl;
}

//Simple function executed at run time, displays cat name and cat toy.
void cat::playwithtoy()
{
    cout << name << " is playing with " << catfavtoy << endl;
}

//Simple function executed at run, displays cat sound
void cat::makesound() 
{
	cout<<""<<endl;
	cout<<"Meow, meow, meow."<<endl;
	cout<<""<<endl;
}
cat::~cat() 
{

}