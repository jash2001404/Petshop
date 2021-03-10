//Header Birds subclass of Pet
#include <iostream>
#include <string>
#include "pet.h"

using namespace std;

class bird:public pet
{
public:
	bird();
	~bird();
	bird( string storeaddress, string DOB, string gender, string fav_food, string fav_toy);

	string FavToy;
	 void makesound();
};