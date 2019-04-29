/*************************************************************************************
* Name:		Second Row Final Project
* Members:	Alex B., David A. M., Issouf K., Kristen H., Neil Y., Nick S., & Rob M.
* Purpose:	Wedding Planning Program
*************************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void newBooking();

int main() {
	
//Create User Struct
struct guest {
	string name;
	bool plusOne;
	enum gift {China, Silverware, Trip, Cash};
	enum meal {Steak, Chicken, Vegetarian};
	bool hotel;
	string ccnum;
};
	
	cout << "Welcome to the Wedding RSVP Program." << endl;
	
//RSVP

	cout << "-----RSVP-----" << endl;
	//INSERT RSVP CODE

//GIFT REGISTRY

	cout << "-----Gift Registry-----" << endl;
	//INSERT GIFT CODE

//MEAL CHOICE
	

		int choice;
		enum meal { steak = 1, chicken = 2, vegetarian = 3 };

		cout << "-----Meal Choice-----" << endl;
		cout << "Options" << endl;
		cout << "Enter 1 for Steak" << endl;
		cout << "Enter 2 for Chicken" << endl;
		cout << "enter 3 for Vegetarian" << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "You selected Steak" << endl;
		}
		else if (choice == 2) {
			cout << "You selected Chicken" << endl;
		}
		else if (choice == 3) {
			cout << "You selected Vegetarian" << endl;
		}

		// enter date's meal 
		int date;
		cout << "Are you bringing a date" << endl;
		cout << "Eneter 1 for yes and 2 for no" << endl;
		cin >> date;
		if (date == 1) {
			cout << "What Meal would your date like?" << endl;
			cout << "Options" << endl;
			cout << "Enter 1 for Steak" << endl;
			cout << "Enter 2 for Chicken" << endl;
			cout << "enter 3 for Vegetarian" << endl;
			cin >> choice;
			if (choice == 1) {
				cout << "You selected Steak" << endl;
			}
			else if (choice == 2) {
				cout << "You selected Chicken" << endl;
			}
			else if (choice == 3) {
				cout << "You selected Vegetarian" << endl;
			}
		}



	


//HOTEL BOOKING
			cout << "-----Hotel Booking-----" << endl;
			bool reg = true;
			string book;
			int confirm = rand();
	
			cout << "Would you like to book a hotel room? (y/n) " << endl;
			cin >> book;
			cout << "\n";
				if (book == "N" || book == "n")
				reg = false;
		
				if (reg == true){
					newBooking();
					//confirm booking
					cout << "Thank you for booking with our hotel.\n";
					cout << "Your confirmation number is " << confirm << ".\n"; //possibly save to user struct
				} //if-reg-true
	
				if (reg == false)
					cout << "OK. We hope you enjoy the Wedding!" << endl;

	cout << endl << "The End. Goodbye.";
	system("pause");
	return 0;

} //int main

void newBooking(){
	string guestname, ccnum, cvv, zip;
	
	//collect registration info
	cout << "Please enter your Name: " << endl; //can't I get this from the login?
	cin.ignore();
	getline (cin,guestname);
	cout << "\n";
	cout << "Please enter your Credit Card Number: " << endl;
	getline (cin,ccnum);
	cout << "\n";
	cout << "Please enter your Credit Card CVV: " << endl;
	getline (cin,cvv);
	cout << "\n";
	cout << "Please enter your Zip Code: " << endl;
	getline (cin,zip);
	cout << "\n";
} //newBooking



/*************************************************************************************
* Name:		Second Row Final Project
* Members:	Alex B., David A. M., Issouf K., Kristen H., Neil Y., Nick S., & Rob M.
* Purpose:	Wedding Program
*************************************************************************************/

/*

#include <iostream>
#include<fstream>
#include<string.h>
#include<cstdio>
#include<stdlib.h>
using namespace std;



struct weeding_attributes{
    string meals[10];
    int seats;
}weeding_attributes;

class wedding
{
public:
    void create();
    // void query();
    void display();
    // void update();
    void delet();
    void wedding_planner();
    void guest();
};

void wedding::create()
{
      char a;
      int i = 0;
      cout<<"HOW MANY SEATS:";
      cin>>weeding_attributes.seats;
      cin.ignore();
      string meal="";



    top:
    do {
        cout<<"AAD MEALS:";
        cin>>meal;
        weeding_attributes.meals[i] = meal;
        cout<<"do you want to add an other [y/n]:";

        cin>>a;
        i++;
    }
    while(a!='n');
}

// void reserve_your_seat();
// void sign_in ();

int main(){
  wedding wedding_1;


//--Program Menu--
	cout << "-----Wedding Program Menu-----" << endl;
	bool run = true;
	int choice = 0;
	while (run) {
		cout << "Available programs:" << endl;
		cout << "(1) Wedding Planner" << endl;
		cout << "(2) Guest" << endl;
		cout << "Please choose a program to run from the list above: ";
		cin >> choice;
		//validate choice with while-loop
		while (choice < 1 || choice > 7) {
      cout << "Available programs:" << endl;
      cout << "(1) Wedding Planner" << endl;
      cout << "(2) Guest" << endl;
      cout << "Please choose a program to run fromthe list above: ";
      cin >> choice;

		}
		cout << "\n";

//--Program 1--
	if (choice == 1) {
		cout << "-----Program 1-----" << endl;
		//INSERT CODE FOR PROGRAM 1
    int choice_1;
     cout << "-----(1) To create a weeding-----" << endl;
     cout << "-----(1) Program 2-----" << endl;
	   cout << "Please enter a number between 1 & 7: ";
	   cin >> choice_1;
     if (choice_1 == 1){
      wedding_1.create();
    }
	}

//--Program 2--
	if (choice == 2) {
		cout << "-----Program 2-----" << endl;
		//INSERT CODE FOR PROGRAM 2
	}

//--Program 3--
	if (choice == 3) {
		cout << "-----Program 3-----" << endl;
		//INSERT CODE FOR PROGRAM 3
	}

//--Program 4--
	if (choice == 4) {
		cout << "-----Program 4-----" << endl;
		//INSERT CODE FOR PROGRAM 4
	}

//--Program 5--
	if (choice == 5) {
		cout << "-----Program 5-----" << endl;
		//INSERT CODE FOR PROGRAM 5
	}

//--Program 6--
	if (choice == 6) {
		cout << "-----Program 6-----" << endl;
		//INSERT CODE FOR PROGRAM 6
	}

//--Program 7--
	if (choice == 7) {
		cout << "-----Program 7-----" << endl;
		//INSERT CODE FOR PROGRAM 7
	}

//--Run Another Program?
	string answer;
	cout << endl << "Would you like to run another program? (y/n) ";
		cin >> answer;
		cout << "\n";
		if (answer == "No" || answer == "no" || answer == "NO" || answer == "n" || answer == "N")
			run = false;

	} //run while

	cout << endl << "The End. Goodbye.";
	system("pause");
	return 0;

} //int main */

