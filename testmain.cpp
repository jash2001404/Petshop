//Test main - this main will call a variety of functions testing that each of them work, the print out is messy

//Headers
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

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//These varibales are used for revenue and expense calculations. 
	int sales_of_enclosure,sales_of_foodstore,sales_of_petstore_counter, beginingstock, dailysales;					
	
	//These variables are used to set the inital amount of animals in the store, 48 pets in total.
	int catsremaining  = 12;
	int dogsremaining  = 12;
	int birdsremaining = 12;
	int fishremaining  = 12;

	//These are the various prices for the pets, they are hard coded as they are not expected to change. (in AUD)
	int catprice  = 40; 
	int dogprice  = 40;
	int birdprice = 20;
	int fishprice = 10;

	//This varible is = to the value of our current stock.(used for testing the moneytaker)
	beginingstock = catsremaining*catprice+dogsremaining*dogprice+birdsremaining*birdprice+fishremaining*fishprice;

	//This section tests all the functions is petshop,enclosure, foodstore
	petshop p("The Royal PETSHOP","Adelaide Australia");
	cout<<p.showname();
	cout<< " in " << p.showaddress()<<endl;
	p.moneytaker(0);
	cout<<p.personalsales()<<endl;

	enclosure e("The Royal ENCLOSURE","Adelaide Australia");
	cout<<e.showname()<<endl;
	//cout<<e.showaddress()<<endl;
	e.moneytaker(0);
	cout<<e.personalsales()<<endl;

	foodstore f("The Royal FOODSTORE","Adelaide Australia");
	cout<<f.showname()<<endl;
	//cout<<f.showaddress()<<endl;
	f.moneytaker(0);
	cout<<f.personalsales()<<endl;

	//This section shows the functions of caretaker
	caretaker c1("guy","Adelaide, Australia","29 Feb",1);
	cout<<c1.showname();
	cout<< " lives in " << c1.showaddress()<<endl;
	c1.feed_animal();
	c1.care_for_animal();

	//These variables keep track of animals purchased and sold, this is need to calculate cash at end of day
	int dogcounter=0;
	int catcounter=0;
	int fishcounter=0;
	int birdcounter=0;
	
	// string dognames[]  = {"hiiru","coco","Ninja"} ;
	dog *dogs[100] ;
	// string catnames[]  = {"abby","Suzie","grace"} ;
	cat *cats[100] ;
	// string fishnames[] = {"lucy","ben","liam"} ;
	fish *fishes[100] ;
	// string birdnames[] = {"zac","rockstar","patrick"} ;
	bird *birds[100] ;

	//

    //Below is a subsection of the above section, creating the animals which the store already has.
	/*for Dogs*/
	for ( int D = 0 ; D < 12; D++ )
	{
		dogs[D] = new dog("enclosure part 1","2 weeks old","female","chicken","ball");
		dogcounter++;	
	}
	
	/*for Cats*/
	for ( int C = 0 ; C < 12 ; C++ )
	{
		cats[C] = new cat("enclosure part 1","2 weeks old","female","chicken","ball");	
		catcounter++ ;
	}
	
	/*for Birds*/
	for ( int B = 0 ; B < 12 ; B++ )
	{
		birds[B] = new bird("enclosure part 1","2 weeks old","female","chicken","ball");	
		birdcounter++ ;
	}
	
	/*for Fish*/
	for ( int F = 0 ; F < 12 ; F++ )
	{
		fishes[F] = new fish("enclosure part 1","2 weeks old","female","chicken","ball");	
		fishcounter++ ;
	}

	//

	//This section shows all the functions of manager: namely adding and selling.
	//we also show methods of calling functions, allocation of memory on heap.	
	manager m("jake","Adelaide","1st feb",2);

	//Animals are added (purchased) here
	int numberofpets=0;
	for (int addcounter = 0; addcounter < 4; ++addcounter)        		   
	{
		string animallotname2=m.Addnewanimal();
		cout<<"How many?"<<endl;
		cin>>numberofpets;
		
		//The below loop tests the function for the dog class
		if (animallotname2=="dog")
		{
			for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				dogs[i] = new dog("enclosure part 1","2 weeks old","female","chicken","ball");	 
				dogs[i]->makesound() ;
				dogs[i]->playwithtoy() ;
				p.moneytaker(-40);
				dogcounter++;
			}
		}
		//The below loop tests the function for the cat class
		else if (animallotname2=="cat")
		{
				for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				cats[i] = new cat("enclosure part 2","2 weeks old","female","chicken","ball");	 
				cats[i]->makesound() ;
				cats[i]->playwithtoy() ;
				p.moneytaker(-40);
				catcounter++;
			}
		}
		//The below loop tests the function for the bird class
		else if (animallotname2=="bird")
		{
			for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				birds[i] = new bird("enclosure part 3","2 weeks old","male","watermelon seeds","bells");	
				birds[i]->makesound() ;
				p.moneytaker(-20);
				birdcounter++;
			}
		}
		//The below loop tests the function for the fish class
		else if (animallotname2=="fish")
		{
			for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				fishes[i] = new fish("enclosure part 4","2 weeks old","male","fish food","fresh water");	 
				fishes[i]->makesound() ;
				p.moneytaker(-10);
				fishcounter++;
			}
		}
		//Error message in case of typo or other.
		else
		{
			cout<<"This type of animal is not available"<<endl;
		}
	}

	//

	//Animals are removed (sold) here
	//This section sells animals, basically deleting the arrays, freeing the memory.
	for (int sellcounter = 0; sellcounter < 4; ++sellcounter)             
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
				p.moneytaker(40);
				dogcounter--;
			}
		}
		
		else if (animallotname1=="cat")	
		{
			for ( int j = 0 ; j < numberofpets ; j++ )
			{
				delete cats[j] ;
				cout<<"The cats were sold"<<endl;
				p.moneytaker(40);
				catcounter--;
			}
		}
		
		else if (animallotname1=="fish")	
		{
			for ( int j = 0 ; j < numberofpets ; j++ )
			{
				delete fishes[j];
				cout<<"The fishes were sold"<<endl;
				p.moneytaker(10);
				fishcounter--;
			}
		}
		
		else if (animallotname1=="bird")
		{
			for ( int j = 0 ; j < numberofpets ; j++ )
			{	
				delete birds[j];
				cout<<"The birds were sold"<<endl;
				p.moneytaker(20);
				birdcounter--;
			}
		}
		
		else
		{
			cout<<"This type of animal is not available"<<endl;
		}
	}

	/*This section shows the results of revenue calculation for the day, we have created a seperate code
	just to test the function which calculates money.*/

	//Updates cats remaining to the end of day value. 
	catsremaining = catcounter;
	dogsremaining = dogcounter;
	birdsremaining = birdcounter;
	fishremaining = fishcounter;

	//Sets sales_of_pet.. = to the remainig pets * pet price. Aka value of stock at end of day
	int sales_of_petstore_counter_test = catsremaining*catprice+dogsremaining*dogprice+birdsremaining*birdprice+fishremaining*fishprice;
	
	//begining stock is = to pets at start of day, while sales_of.. is = to pets at end of day. This is used to calculate revenue.
	dailysales = (beginingstock-sales_of_petstore_counter_test); 

	cout<<"(Testing)Revenue generated from todays sales equals $" << dailysales <<endl;
	
	//the orignal function that will be called while presenting, below. This is done by moneytaker.
	sales_of_petstore_counter =p.personalsales();
	sales_of_enclosure = e.personalsales();
	sales_of_foodstore = f.personalsales();
	cout<<p.dailysales(sales_of_foodstore,sales_of_enclosure,sales_of_petstore_counter)<<endl;

}
