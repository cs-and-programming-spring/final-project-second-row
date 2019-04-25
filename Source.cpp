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

	//--Program Menu--
	cout << "-----Wedding Planning Menu-----" << endl;
	bool run = true;
	int choice = 0;
	while (run) {
		cout << "Available programs:" << endl;
		cout << "(1) Program 1" << endl;
		cout << "(2) Program 2" << endl;
		cout << "(3) Program 3" << endl;
		cout << "(4) Program 4" << endl;
		cout << "(5) Program 5" << endl;
		cout << "(6) Program 6" << endl;
		cout << "(7) Book Hotel Room" << endl;
		cout << "Please choose a program to run from the list above: ";
		cin >> choice;
		//validate choice with while-loop
		while (choice < 1 || choice > 7) {
			cout << "Please enter a number between 1 & 7: ";
			cin >> choice;
		} //while
		cout << "\n";

		//--Program 1--
		if (choice == 1) {
			cout << "-----Program 1-----" << endl;
			//INSERT CODE FOR PROGRAM 1
		} //1

		//--Program 2--
		if (choice == 2) {
			cout << "-----Program 2-----" << endl;
			//INSERT CODE FOR PROGRAM 2
		} //2

		//--Program 3--
		if (choice == 3) {
			cout << "-----Program 3-----" << endl;
			//INSERT CODE FOR PROGRAM 3
		} //3

		//--Program 4--
		if (choice == 4) {
			cout << "-----Program 4-----" << endl;
			//INSERT CODE FOR PROGRAM 4
		} //4

		//--Program 5--
		if (choice == 5) {
			cout << "-----Program 5-----" << endl;
			//INSERT CODE FOR PROGRAM 5
		} //5

		//--Program 6--
		if (choice == 6) {
			cout << "-----Program 6-----" << endl;
			//INSERT CODE FOR PROGRAM 6
		} //6

		//--Program 7--
		if (choice == 7) {
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
			} //7

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
