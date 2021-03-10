//Header file for Dog ss of Pet
#include <iostream>
#include <string>
#include "pet.h"

using namespace std;

class dog:public pet
{
public:
	dog();
	~dog();
	dog(string storeaddress, string DOB, string gender, string fav_food, string fav_toy);

	string dogfavtoy;

	virtual void playwithtoy();
	void makesound();

};