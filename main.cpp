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


#include <string>

using namespace std;

int main()
{
	int sales_of_enclosure,sales_of_foodstore,sales_of_petstore_counter; 							
	
	int beginingstock, dailysales;					
	
	int catsremaining = 12;
	int dogsremaining = 12;
	int birdsremaining = 12;
	int fishremaining = 12;

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
manager m("jake","Adelaide","1st feb",2);

int dogcounter=0;
int catcounter=0;
int fishcounter=0;
int birdcounter=0;
	
	// string dognames[] = { "hiiru","coco","Ninja" } ;
	dog *dogs[100] ;

	// string catnames[] = { "abby","Suzie","grace" } ;
	cat *cats[100] ;

	// string fishnames[] = { "lucy","ben","liam" } ;
	fish *fishes[100] ;

	// string birdnames[] = { "zac","rockstar","patrick" } ;
	bird *birds[100] ;


for ( int D = 0 ; D < 12; D++ )
	{
		dogs[D] = new dog("enclosure part 1","2 weeks old","female","chicken","ball");
		dogcounter++;	 // initialised
	}
for ( int C = 0 ; C < 12 ; C++ )
	{
		cats[C] = new cat("enclosure part 1","2 weeks old","female","chicken","ball");	
		catcounter++ ;// initialised
	}
for ( int B = 0 ; B < 12 ; B++ )
	{
		birds[B] = new bird("enclosure part 1","2 weeks old","female","chicken","ball");	
		birdcounter++ ;// initialised
	}
for ( int F = 0 ; F < 12 ; F++ )
	{
		fishes[F] = new fish("enclosure part 1","2 weeks old","female","chicken","ball");	
		fishcounter++ ;// initialised
	}




int numberofpets=0;
for (int addcounter = 0; addcounter < 4; ++addcounter)         //ANIMALS CAN BE ADDED OVER HERE
{
string animallotname2=m.Addnewanimal();
cout<<"How many?"<<endl;
cin>>numberofpets;
if (animallotname2=="dog")
{
	for ( int i = 12 ; i < 12 + numberofpets ; i++ )
	{
		dogs[i] = new dog("enclosure part 1","2 weeks old","female","chicken","ball");	 // initialised
		dogs[i]->makesound() ;
		dogs[i]->playwithtoy() ;
		dogcounter++;
	}
}
else if (animallotname2=="cat")
{
		for ( int i = 12 ; i < 12 + numberofpets ; i++ )
	{
		cats[i] = new cat("enclosure part 2","2 weeks old","female","chicken","ball");	 // initialised
		cats[i]->makesound() ;
		cats[i]->playwithtoy() ;
		catcounter++;
	}
}
else if (animallotname2=="bird")
{
	for ( int i = 12 ; i < 12 + numberofpets ; i++ )
	{
		birds[i] = new bird("enclosure part 3","2 weeks old","male","watermelon seeds","bells");	 // initialised
		birds[i]->makesound() ;
		birdcounter++;
	}
}
else if (animallotname2=="fish")
{
	for ( int i = 12 ; i < 12 + numberofpets ; i++ )
	{
		fishes[i] = new fish("enclosure part 4","2 weeks old","male","fish food","fresh water");	 // initialised
		fishes[i]->makesound() ;
		fishcounter++;
	}
}
else
{
	cout<<"This type of animal is not available"<<endl;
}
}



for (int sellcounter = 0; sellcounter < 4; ++sellcounter)             //ANIMALS CAN BE SOLD OVER HERE
{
string animallotname1=m.Sellanimal();
cout<<"How many?"<<endl;
cin>>numberofpets;
if (animallotname1=="dog")
{
	for ( int j = 0 ; j < numberofpets ; j++ )
	{
		delete dogs[j] ;
cout<<"The dogs were sold"<<endl;
dogcounter--;
	}
}
else if (animallotname1=="cat")	
{
	for ( int j = 0 ; j < numberofpets ; j++ )
	{
		delete cats[j] ;
cout<<"The cats were sold"<<endl;
catcounter--;
	}
}
else if (animallotname1=="fish")	
{
	for ( int j = 0 ; j < numberofpets ; j++ )
	{
		delete fishes[j];
cout<<"The fishes were sold"<<endl;
fishcounter--;
	}
}
else if (animallotname1=="bird")
{
	for ( int j = 0 ; j < numberofpets ; j++ )
	{	
		delete birds[j];
cout<<"The birds were sold"<<endl;
birdcounter--;
	}
}
	else
{
	cout<<"This type of animal is not available"<<endl;
}
}
		catsremaining = catcounter;
		dogsremaining = dogcounter;
		birdsremaining = birdcounter;
		fishremaining = fishcounter;

		sales_of_petstore_counter = catsremaining*catprice+dogsremaining*dogprice+birdsremaining*birdprice+fishremaining*fishprice;
		dailysales = beginingstock-sales_of_petstore_counter;

		cout<<"Revenue generated from todays sales equals $" << dailysales <<endl;

}