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


class wedding
{
public:
    void create();
    // void query();
    void display();
    // void update();
    void delete_wedding();
    void wedding_planner();
    void guest();
};



class reservation
{
public:
    void create();
    // void query();
    void display();
    // void update();
    void delete_reservation();
};


class guest
{
public:
    void create();
    // void query();
    void display();
    void update();
    void delete_guest();
   
};

void wedding::create()
{
      char a;
      int seats;
      int i = 0;

      //preparing the weeding file
      ofstream weeding_file;
      weeding_file.open ("weeding_file.txt");
      cout<<"HOW MANY SEATS:";
      cin>>seats;

      // writing the num of seats into file
      weeding_file<<"Seats: "<<seats<<"\n";
      cin.ignore();
      int rooms;
      cout<<"HOW MANY ROOMS:";
      cin>>rooms;
      weeding_file<<"rooms: "<<rooms<<"\n";
      cin.ignore();

      string meal="";
    top:
    do {
        cout<<"AAD MEALS:";
        cin>>meal;
        //weeding_attributes.meals[i] = meal;
        weeding_file<<"Meal number "<<i+1<<": "<<meal<<"\n";
        cout<<"do you want to add an other [y/n]:";
        cin>>a;
        i++;
    }
    while(a!='n');
    weeding_file.close();
}


void wedding::display()
{
    ifstream wedding_display;
    wedding_display.open("weeding_file.txt");
    string line;
  if (wedding_display.is_open())
  {
    while ( getline (wedding_display,line) )
    {
      cout << line << '\n';
    }
    wedding_display.close();
  }

  else cout << "Unable to open file";


}

void wedding::delete_wedding(){
    ofstream weeding_file;
      weeding_file.open ("weeding_file.txt");
      weeding_file<<"";
      cout<<"wedding deleted!";
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
      cout << "Please choose a program to run from the list above: ";
      cin >> choice;
		}
		cout << "\n";
//--Program 1--
	if (choice == 1) {
		cout << "-----Program 1-----" << endl;
		//INSERT CODE FOR PROGRAM 1
    int choice_1;
     cout << "-----(1) To create a wedding-----" << endl;
     cout << "-----(2) view exiting wedding-----" << endl;
     cout << "-----(3) delete exiting wedding-----" << endl;
	 cout << "Please enter a number between 1 & 7: ";
	   cin >> choice_1;
     if (choice_1 == 1){
      wedding_1.create();
    }
     if (choice_1 == 2){
     wedding_1.display();
    }
     if (choice_1 == 3){
     wedding_1.delete_wedding();
    }
	}
//--Program 2--
	if (choice == 2) {
		cout << "-----Program 2-----" << endl;

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
