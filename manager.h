//Header for manager class subclass of human
#include <iostream>
#include <string>
#include "human.h"
using namespace std;

class manager:public human
{
public:
	manager();//constructor,destructor initialised
	~manager();
	manager(string storename,string storeaddress, string DOB, int salary_level );
	string animallotnameforselling;
	string animallotnameforadding;
	virtual string Addnewanimal();//the functions which allocate and facilitate the number of animals to sell and buy
	virtual string Sellanimal();

};