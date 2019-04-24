/*************************************************************************************
* Name:		Second Row Final Project
* Members:	Alex B., David A. M., Issolif K., Kristen H., Neil Y., Nick S., & Rob M.
* Purpose:	Wedding Guest Log in and Wedding Planner Program
*************************************************************************************/

#include "staff.h"
#include <iostream>
using namespace std; 

int main(){

//--Program Menu--
	cout << "-----Guest Menu-----" << endl;
	bool run = true;
	int choice = 0;
	while (run) {
		cout << "Available programs:" << endl;
		cout << "(1) Choose a meal" << endl;
		cout << "(2) Register a gift" << endl;
		cout << "(3) Verification of hotel reservation" << endl;
		cout << "Please choose a program to run from the list above: ";
		cin >> choice;
		//validate choice with while-loop
		while (choice < 1 || choice > 3) {
			cout << "Please enter a number between 1 & 3: ";
			cin >> choice;
		}
		cout << "\n";
		
//--Program 1--
	if (choice == 1) {
		cout << "-----Chossing a meal-----" << endl;
		//INSERT CODE FOR PROGRAM 1
	}
		
//--Program 2--
	if (choice == 2) {
		cout << "-----Registering a gift for the bride and groom-----" << endl;
		//INSERT CODE FOR PROGRAM 2
	}
		
//--Program 3--
	if (choice == 3) {
		cout << "-----Hotel Reservation Program-----" << endl;
		//INSERT CODE FOR PROGRAM 3
	}
		
//--Run Another Program?
	string answer;
	cout << endl << "Would you like to run another program? (y/n) ";
		cin >> answer;
		cout << "\n";
		if (answer == "No" || answer == "no" || answer == "NO" || answer == "n" || answer == "N")
			run = false;

	} //run while
	
	cout << endl << "The End. Goodbye";
	system("pause");
	return 0;
	
} //int main
