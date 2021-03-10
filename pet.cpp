//Pet class parent class of pets.
#include <iostream>
#include <string>
#include "pet.h"

using namespace std;

int pet::id = 0;

pet::pet()
{
	myid = id++;
	name = "No name given";
	petfavfood ="No fav.food given";
	//cout << "Created an Animal of type " << type << " with ID: " << myid << endl;
}
//implementation of constructor
pet::pet( string storeaddress, string DOB, string gender, string fav_food):petshop(  storeaddress)
{
	myid = id++;
	dateborn = DOB;
	petfavfood = fav_food;
	//cout << "Created an Animal of species " << species << " with ID: " << myid << endl;
}
pet::~pet()
{
	
}