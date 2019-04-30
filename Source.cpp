/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

    int number_of_rooms_avalaible = 0;
    int number_of_seats_avalaible = 0;

class wedding
{
public:
    int seats;
    int rooms;
    string meals[3];
    void create();
    void display();
    void display_meals();
    void delete_wedding();
};



class reservation
{
public:
    void create(string user_name);
    // void query();
    void display();
    // void update();
    void delete_reservation();
    int number_of_rooms;

};


class guest
{
// private:
//   string Guest_list[];
public:
    void create();
    void display();
    //void set_guest_list_size(size);
    void update();
    void delete_guest();
    string fname;
    string lname;


};

// void reserve_your_seat();
// void sign_in ();
int main(){
  wedding wedding_1;
  int meal_choice;
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

		cout << "-----Guest-----" << endl;

        reservation reserv;
		 int choice_2;
     cout << "-----(1) To create an reservation-----" << endl;
     cout << "-----(2) view exiting reservation-----" << endl;
     cout << "-----(3) delete exiting reservation-----" << endl;
	 cout << "Please enter a number between 1 & 3: ";
	   cin >> choice_2;
     if (choice_2 == 1){
    guest myguest;
    myguest.create();

    ofstream reservation_file;
    reservation_file.open("reservation.txt");

    cout<<"select your meal";
    wedding_1.display_meals();
    cin>>meal_choice;
    if(meal_choice<3 && meal_choice>0){
    reservation_file<<" and the selected meal is: "<<meal_choice<<"\n";
    }
reservation_file.close();
    }
     if (choice_2 == 2){
    // reserv.display();
    }
     if (choice_2 == 3){
    // reserv.delete_reservation();

	}}
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
	//system("pause");
	return 0;
} //int main




void wedding::create()
{
      char a;
      //int seats;
      int i = 0;

      //preparing the weeding file
      ofstream weeding_file;
      weeding_file.open ("weeding_file.txt");
      cout<<"HOW MANY SEATS:";
      cin>>wedding::seats;

      // writing the num of seats into file
      weeding_file<<"Seats: "<<wedding::seats<<"\n";


       //set avalaible seats
      number_of_seats_avalaible = wedding::seats;

      cin.ignore();
      //int rooms;
      cout<<"HOW MANY ROOMS:";
      cin>>wedding::rooms;
      //set avalaible rooms
      number_of_rooms_avalaible = wedding::rooms;

      weeding_file<<"rooms: "<<wedding::rooms<<"\n";
      cin.ignore();

    //  string meal="";
    top:
    do {
        cout<<"AAD MEALS:";
        cin>>wedding::meals[i];
        //weeding_attributes.meals[i] = meal;
        weeding_file<<i+1<<". "<<"Meal: "<<wedding::meals[i]<<"\n";
        cout<<"do you want to add an other [y/n]:";
        cin>>a;
        i++;
    }
    while(a!='n' && i<2);
    weeding_file.close();
}

void wedding::display_meals(){
    for (int i; i<3;i++){
        wedding::meals[i];
    }

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

void  guest::create(){
    ofstream guest_list;
    guest_list.open("guest_list.txt");

    char a;
    int i=0;
    char res;
    int room_number;

    top:
    do {
        cout<<"ENTER YOUR FIRST NAME \n";
        cin>>fname;
        cout<<"ENTER YOUR FIRST NAME \n";
        cin>>lname;
        guest_list<<i+1<<". "<<"first name: "<<fname<<", last name: "<<lname<<endl;
        guest_list<<"---------------------------------------------\n";
        cout<<"do you want to reserve a room [y/n]:";
        cin>>res;

          if (res ='y'){
            reservation reser;
            reser.create(fname+" "+lname);
           }
        cout<<"do you want to add another guest [y/n]:";
        cin>>a;
        i++;

    }while(a!='n');
        //reserv.create();
        guest_list.close();
}

void guest::display(){

cout<<"-----guest list----------------\n";

    ifstream guest_list;
    guest_list.open("guest_list.txt");
    string line;
  if (guest_list.is_open())
  {
    while ( getline (guest_list,line) )
    {
      cout << line << '\n';
    }
    guest_list.close();
  }

  else cout << "Unable to open file";


}

void reservation::create(string user_name){

std::cout << "Enter number of rooms" << '\n';
std::cin >> reservation::number_of_rooms;

ofstream reservation_file;
if (number_of_rooms_avalaible > reservation::number_of_rooms){

    reservation_file.open("reservation.txt");
    reservation_file<<"number reserved rooms from "<<user_name<<" is: "
    <<reservation::number_of_rooms<<endl;
    cout<<"room reserved.\n";

    }else{
         cout<<"no more avalaible room.\n";
    }
reservation_file.close();
}
