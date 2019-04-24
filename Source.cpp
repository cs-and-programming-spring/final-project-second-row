/*************************************************************************************
* Name:		Second Row Final Project
* Members:	Alex B., David A. M., Issouf K., Kristen H., Neil Y., Nick S., & Rob M.
* Purpose:	Wedding Program
*************************************************************************************/

#include <iostream>
#include <string>
using namespace std; 

int main(){

//--Program Menu--
	cout << "-----Wedding Program Menu-----" << endl;
	bool run = true;
	int choice = 0;
	while (run) {
		cout << "Available Programs:" << endl;
		cout << "(1) Program 1" << endl;
		cout << "(2) Program 2" << endl;
		cout << "(3) Program 3" << endl;
		cout << "(4) Program 4" << endl;
		cout << "(5) Program 5" << endl;
		cout << "(6) Program 6" << endl;
		cout << "(7) Hotel Booking" << endl;
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
		cout << "-----Program 7 Hotel Booking-----" << endl;
		//INSERT CODE FOR PROGRAM 7
			bool reg = true;
	string book, guestname, ccnum, confirm = "*randomnum*";
	int cvv, zip;
	
	cout << "Would you like to book a hotel room? (y/n) " << endl;
	cin >> book;
	cout << "\n";
		if (book == "N" || book == "n")
			reg = false;
		
			if (reg == true){
				//collect registration info
				cout << "Please enter your Name (no spaces for now): " << endl; //can't I get this from the login?
				cin >> guestname; //fix issue with spaces entered in names
				cout << "\n";
				cout << "Please enter your Credit Card Number: " << endl;
				cin >> ccnum; //convert to private in class
				cout << "\n";
				cout << "Please enter your Credit Card CVV: " << endl;
				cin >> cvv;
				cout << "\n";
				cout << "Please enter your Zip Code: " << endl;
				cin >> zip;
				cout << "\n";
	
				//confirm booking
				cout << "Thank you for booking with our hotel.\n";
				cout << "Your confirmation number is " << confirm << endl; //randomly generate and possible save to user struct
				
			} //if-reg-true
	
			if (reg == false)
				cout << "We hope you enjoy the Wedding!" << endl;
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

<--------------------------------------------------------------------------------------------------------------------------->
	
	
	/*************************************************************************************
* Name:		Second Row Final Project
* Members:	Alex B., David A. M., Issouf K., Kristen H., Neil Y., Nick S., & Rob M.
* Purpose:	Wedding Program
*************************************************************************************/

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

} //int main
