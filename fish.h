//Header file for Bird subclass of Pet
#include <iostream>
#include <string>
#include "pet.h"

using namespace std;

class fish:public pet
{
public:
	fish();
	fish(string storeaddress, string DOB, string gender, string fav_food, string watertype);

	string TypeOfWater; //e.g. salt or fresh
	void makesound();
	~fish();
};
