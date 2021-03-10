#include <iostream>
#include <string>
#include "human.h"
using namespace std;

human::human()
{}

human::human(string storename,string storeaddress, string DOB, int salary_level ):petshop(storename,storeaddress)
{
	dateofbirth=DOB;
	salary=salary_level;
}

//function return date of birth of emplyee
string human::getDOB()
{
	return dateofbirth;
}

//function which return salary level of emplyee
void human::getsalarylevel()
{
	if (salary<1 || salary>3)
	{
		cout<<"Wrong salary code in system"<<endl;
	}
	if (salary==1)
	{
		cout<<"1st level salary"<<endl;
	}
	else if (salary==2)
	{
		cout<<"2nd level salary"<<endl;
	}
	else
	{
		cout<<"3rd level salary"<<endl;
	}
}

//function to add animal
string human::Addnewanimal()
{
	return "So, Virtual isn't working huh?";
}
//function to remove animal
string human::Sellanimal()
{
	return "So, Virtual isn't working huh?";
}

void human::feed_animal()
{
	
}
void human::care_for_animal()
{
	
}
human::~human()
{}


