	//This is the orginal interactive.cpp, it is here for archival purposes only - Your welcom to delete it. 
	/*int sales_of_enclosure,sales_of_foodstore,sales_of_petstore_counter; 							
	petshop p("The Royal PETSHOP","Adelaide Australia");	
	enclosure e("The Royal ENCLOSURE","Adelaide Australia");
	foodstore f("The Royal FOODSTORE","Adelaide Australia");
	caretaker c1("guy","Adelaide, Australia","29 Feb",1);
	manager m("Jake","Adelaide, Australia","1 Jan",2);
	//cout<<p.dailysales(sales_of_foodstore,sales_of_enclosure,sales_of_petstore_counter)<<endl;*/

//This the properly formatted main with correct print out. 

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
	
	// //These variables are used to set the inital amount of animals in the store, 48 pets in total.
	// int catsremaining  = 12;
	// int dogsremaining  = 12;
	// int birdsremaining = 12;
	// int fishremaining  = 12;

	// //These are the various prices for the pets, they are hard coded as they are not expected to change. (in AUD)
	// int catprice  = 40; 
	// int dogprice  = 40;
	// int birdprice = 20;
	// int fishprice = 10;

	//This varible is = to the value of our current stock.(used for testing the moneytaker)
	// beginingstock = catsremaining*catprice+dogsremaining*dogprice+birdsremaining*birdprice+fishremaining*fishprice;

	//This section creates the petshop,enclosure, foodstore
	cout<< "" <<endl;
	petshop p("Hi there, and welcome to the Royal petshop","Adelaide Australia.");
	cout<<p.showname();
	cout<< " in " << p.showaddress()<<endl;
	p.moneytaker(0);

	enclosure e("The Royal ENCLOSURE","Adelaide Australia");
	e.moneytaker(0);

	foodstore f("The Royal FOODSTORE","Adelaide Australia");
	f.moneytaker(0);

	//These variables keep track of animals purchased and sold, this is need to calculate cash at end of day
	int dogcounter=0;
	int catcounter=0;
	int fishcounter=0;
	int birdcounter=0;
	
	//here we are creating the objects for the animals.
	// string dognames[]  = {"hiiru","coco","Ninja"} ;
	dog *dogs[100] ;
	// string catnames[]  = {"abby","Suzie","grace"} ;
	cat *cats[100] ;
	// string fishnames[] = {"lucy","ben","liam"} ;
	fish *fishes[100] ;
	// string birdnames[] = {"zac","rockstar","patrick"} ;
	bird *birds[100] ;

	
	cout<<"Within our pet store, we only stock Cats, Dogs, Birds and Fish."<<endl;
	cout<< "" <<endl;
	cout<<"This program is designed to help you keep track of your revenue, "<<endl;
	cout<<"expenses and daily sales. By tracking the purchase and selling of pets. "<<endl;
	cout<<"So lets get started, ";


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
		cout<<"How many pets of this type would you like to add? ";
		cin>>numberofpets;
		if (numberofpets<0 || numberofpets>20)
		{
			cout<<"Sorry, but that input appears to be invalid. Please try again."<<endl;
			cin>>numberofpets;
		}
		//The below loop tests the function for the dog class
		if (animallotname2=="dog")
		{
			dogs[0]->makesound();
			for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				dogs[i] = new dog("enclosure part 1","2 weeks old","female","chicken","ball");	 
				p.moneytaker(-40);
				dogcounter++;
				
			}
		}
		//The below loop tests the function for the cat class
		else if (animallotname2=="cat")
		{
			cats[0]->makesound();
				for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				cats[i] = new cat("enclosure part 2","2 weeks old","female","chicken","ball");	 
				p.moneytaker(-40);
				catcounter++;
				
			}
		}
		//The below loop tests the function for the bird class
		else if (animallotname2=="bird")
		{
			birds[0]->makesound();
			for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				birds[i] = new bird("enclosure part 3","2 weeks old","male","watermelon seeds","bells");	
				p.moneytaker(-20);
				birdcounter++;
				
			}
		}
		//The below loop tests the function for the fish class
		else if (animallotname2=="fish")
		{
			fishes[0]->makesound();
			for ( int i = 12 ; i < 12 + numberofpets ; i++ )
			{
				fishes[i] = new fish("enclosure part 4","2 weeks old","male","fish food","fresh water");	 
				p.moneytaker(-10);
				fishcounter++;
				
			}
		}
		//Error message in case of typo or other.
		else
		{
			cout<< "" <<endl;
			cout<<"Sorry, but this type of animal does not seem to be avaliable, "<<endl;
			cout<<"please check that the pet name entered was in lower case."<<endl;
			cout<< "" <<endl;
		}
	}

	cout<< "" <<endl;
	cout<<"Great, did you sell any pets? If so, ";

	//Animals are deleted (sold) here
	//This section sells animals, basically deleting the arrays, freeing the memory.
	for (int sellcounter = 0; sellcounter < 4; ++sellcounter)             
	{
		string animallotname1=m.Sellanimal();
		cout<<"How many pets of this type were sold today? ";
		cin>>numberofpets;
		
		if (animallotname1=="dog")
		{
			for ( int j = 0 ; j < numberofpets ; j++ )
			{
				delete dogs[j] ;
				p.moneytaker(40);
				dogcounter--;
			}
		}
		
		else if (animallotname1=="cat")	
		{
			for ( int j = 0 ; j < numberofpets ; j++ )
			{
				delete cats[j] ;
				p.moneytaker(40);
				catcounter--;
			}	
		}
		
		else if (animallotname1=="fish")	
		{
			for ( int j = 0 ; j < numberofpets ; j++ )
			{
				delete fishes[j];
				p.moneytaker(10);
				fishcounter--;
			}
		}
		
		else if (animallotname1=="bird")
		{
			for ( int j = 0 ; j < numberofpets ; j++ )
			{	
				delete birds[j];
				p.moneytaker(20);
				birdcounter--;
			}
		}
		
		else
		{
			cout<< "" <<endl;
			cout<<"Sorry, but this type of animal does not seem to be avaliable, "<<endl;
			cout<<"please check that the pet name entered was in lower case."<<endl;
			cout<< "" <<endl;
		}
	}

	//

	// /*This section shows the results of revenue calculation for the day, we have created a seperate code
	// just to test the function which calculates money.*/

	// //Updates cats remaining to the end of day value. 
	// catsremaining = catcounter;
	// dogsremaining = dogcounter;
	// birdsremaining = birdcounter;
	// fishremaining = fishcounter;

	// //Sets sales_of_pet.. = to the remainig pets * pet price. Aka value of stock at end of day
	// int sales_of_petstore_counter_test = catsremaining*catprice+dogsremaining*dogprice+birdsremaining*birdprice+fishremaining*fishprice;
	
	// //begining stock is = to pets at start of day, while sales_of.. is = to pets at end of day. This is used to calculate revenue.
	// dailysales = (beginingstock-sales_of_petstore_counter_test); 

	// cout<<""<<endl;

	
	
	cout<<""<<endl;

	//the orignal function that will be called while presenting, below. This is done by moneytaker.
	sales_of_petstore_counter =p.personalsales();
	sales_of_enclosure = e.personalsales();
	sales_of_foodstore = f.personalsales();
	dailysales=p.dailysales(sales_of_foodstore,sales_of_enclosure,sales_of_petstore_counter);
	cout<<"Fantastic, today you have made $" << dailysales << " in profit." <<endl;
	
}