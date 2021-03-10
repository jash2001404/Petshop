//Petshop class header with relevant attributes and functions
#include <iostream>
#include <string>
#pragma once

using namespace std;
class petshop
{
public:
	petshop();//constructor,deconstructor declared
	~petshop();
	petshop(string storename,string storeaddress);//constructor going to be used by other 3 classes
	petshop(string storeaddress);//constructor which is going to be used by pet child class
	string name;
	string address;
//function to show details
	string showname();
	string showaddress();
	int personalsales();
	virtual void moneytaker(int moneygiven);// the function which deals with all the money
	int dailysales(int foodsales, int animalsales, int petstorecountersales);//shows daily money sales

protected:
	 static int real_s; // s represents the total sales of an object at any given time.
	 int s;
};
