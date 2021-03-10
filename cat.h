//Header file for Cat subclass of Pet
#include <iostream>
#include <string>
#include "pet.h"

using namespace std;

class cat:public pet
{
public:
	cat();
	~cat();
	cat(string storeaddress, string DOB, string gender, string fav_food, string fav_toy);

	string catfavtoy;

	virtual void playwithtoy();
	void makesound();
};