//Header for pet class subclass of petshop
#include <iostream>
#include <string>
#include "petshop.h"
#pragma once
using namespace std;

class pet:public petshop
{
public:
	pet();
	~pet();
	pet( string storeaddress, string DOB, string gender, string fav_food);//inherited address from petshop and then used some things of its own
	
	static int id;//has id alloted to each pet, to keep it constant, static is used.
	int myid;

	string dateborn;//some functions to display details
	string gender;
	string petfavfood;
	virtual void makesound()=0;
};