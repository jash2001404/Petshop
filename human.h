//Header of human subclass of petshop
#include <iostream>
#include <string>
#include "petshop.h"
#pragma once
using namespace std;

class human:public petshop
{
public:
	human();
	~human();
	human(string storename,string storeaddress,string DOB, int salary_level);
	int salary;
	string dateofbirth;
	 void getsalarylevel();
	 string getDOB();
	 virtual void feed_animal();
	 virtual void care_for_animal();
	 virtual string Addnewanimal();
	 virtual string Sellanimal();

};
