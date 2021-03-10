//Header for caretaker subclass of human
#include <iostream>
#include <string>
#include "human.h"
using namespace std;

class caretaker:public human
{
public:
	caretaker();
	~caretaker();
	caretaker(string storename,string storeaddress, string DOB, int salary_level );
	
	 virtual void feed_animal();
	 virtual void care_for_animal();

};