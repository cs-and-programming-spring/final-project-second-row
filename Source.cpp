/*************************************************************************************
* Name:		Second Row Final Project
* Members:	Alex B., David A. M., Issolif K., Kristen H., Neil Y., Nick S., & Rob M.
* Purpose:	Airline Booking & Admin Program
*************************************************************************************/

#include "staff.h"
#include <iostream>
using namespace std; 

int main(){

//--Program Menu--
	cout << "-----Fligh Admin Menu-----" << endl;
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
		cout << "(7) Program 7" << endl;
		cout << "Please choose a program to run from the list above: ";
		cin >> choice;
		//validate choice with while-loop
		while (choice < 1 || choice > 7) {
			cout << "Please enter a number between 1 & 7: ";
			cin >> choice;
		}
		cout << "\n";
		
//--Program 1--
	if (choice == 1) {
		cout << "-----Program 1-----" << endl;
		//INSERT CODE FOR PROGRAM 1
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
	
} //int main

// did branch work 
