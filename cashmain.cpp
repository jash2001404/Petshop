#include <string>
#include <iostream>
#include "enclosure.h"
#include "foodstore.h"
#include "petshop.h"
#include "human.h"
#include "caretaker.h"
#include "manager.h"
#include "bird.h"
#include "dog.h"
#include "cat.h"
#include "fish.h"

using namespace std;

int main()
{
	int sales_of_enclosure,sales_of_foodstore,sales_of_petstore_counter;
	int beginingstock, dailysales;					
	
	int catsremaining = 6;
	int dogsremaining = 6;
	int birdsremaining = 6;
	int fishremaining = 6;

	int catprice = 40; 
	int dogprice = 40;
	int birdprice = 20;
	int fishprice = 10;

	//This varible is = to the value of our current stock.
	beginingstock = catsremaining*catprice+dogsremaining*dogprice+birdsremaining*birdprice+fishremaining*fishprice;

	petshop p("The Royal PETSHOP","Adelaide Australia");
	cout<<p.showname();
	cout<< " in " << p.showaddress()<<endl;
	p.moneytaker(10);
	sales_of_petstore_counter =p.personalsales();
	cout<<p.personalsales()<<endl;

	enclosure e("The Royal ENCLOSURE","Adelaide Australia");
	cout<<e.showname()<<endl;
	//cout<<e.showaddress()<<endl;
	e.moneytaker(10);
	sales_of_enclosure = e.personalsales();
	cout<<e.personalsales()<<endl;

	foodstore f("The Royal FOODSTORE","Adelaide Australia");
	cout<<f.showname()<<endl;
	//cout<<f.showaddress()<<endl;
	f.moneytaker(10);
	sales_of_foodstore = f.personalsales();
	cout<<f.personalsales()<<endl;

	cout<<p.dailysales(sales_of_foodstore,sales_of_enclosure,sales_of_petstore_counter)<<endl;

	caretaker c1("guy","Adelaide, Australia","29 Feb",1);
	cout<<c1.showname();
	cout<< " lives in " << c1.showaddress()<<endl;

	
	string dognames[] = { "Mike","Henry","Rex" } ;
	dog *dogs[3] ;

	string catnames[] = { "Bob","Suzie","Harry" } ;
	cat *cats[3] ;

	sales_of_petstore_counter = catsremaining*catprice+dogsremaining*dogprice+birdsremaining*birdprice+fishremaining*fishprice;
	dailysales = beginingstock-sales_of_petstore_counter;

	cout<<"Revenue generated from todays sales equals $" << dailysales <<endl;
}