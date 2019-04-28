/*************************************************************************************
* Name:		Second Row Final Project
* Members:	Alex B., David A. M., Issolif K., Kristen H., Neil Y., Nick S., & Rob M.
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
	int plusOne;
	enum gift {China, Silverware, Trip, Cash};
	enum meal {Steak, Chicken, Vegetarian};
	bool hotel;
	string ccnum;
};
	
	cout << "Welcome to the Wedding RSVP Program." << endl;
	
//RSVP

	cout << "-----RSVP-----" << endl;
	//Date or no date
	
	for(int i = 1; i <= 5; i++){
		cout << "Are you bringing a date? (yes or no)" << endl;
		cin >> answer;
   			if(answer == "yes" || answer == "Yes"){;
   				plusone++;
							      }		       
    				cout << plusone <<endl;
		}

//GIFT REGISTRY

	cout << "-----Gift Registry-----" << endl;
	//INSERT GIFT CODE

//MEAL CHOICE

	cout << "-----Meal Choice-----" << endl;
	//INSERT MEAL CODE


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
