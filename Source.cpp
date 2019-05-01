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
#/******************************************************************************

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
    reservation_file.open("reservation.txt",ios::app);

    // cout<<"select your meal";
    // wedding_1.display_meals();
    // cin>>meal_choice;
    // if(meal_choice<3 && meal_choice>0){
    // reservation_file<<" and the selected meal is: "<<meal_choice<<"\n";
    // }
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
      ofstream wedding_file;
      wedding_file.open ("wedding_file.txt");
      cout<<"HOW MANY SEATS:";
      cin>>wedding::seats;

      // writing the num of seats into file
      wedding_file<<"Seats: "<<wedding::seats<<"\n";


       //set avalaible seats
      number_of_seats_avalaible = wedding::seats;

      cin.ignore();
      //int rooms;
      cout<<"HOW MANY ROOMS:";
      cin>>wedding::rooms;
      //set avalaible rooms
      number_of_rooms_avalaible = wedding::rooms;

      wedding_file<<"rooms: "<<wedding::rooms<<"\n";
      cin.ignore();

    //  string meal="";
    top:
    do {
        cout<<"ADD MEALS:";
        cin>>wedding::meals[i];
        //weeding_attributes.meals[i] = meal;
        wedding_file<<i+1<<". "<<"Meal: "<<wedding::meals[i]<<"\n";
        cout<<"do you want to add an other [y/n]:";
        cin>>a;
        i++;
    }
    while(a!='n' && i<2);
    wedding_file.close();
}

// void wedding::display_meals(){
//
//
// }
void wedding::display()
{
    ifstream wedding_display;
    wedding_display.open("wedding_file.txt");
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
    ofstream wedding_file;
      wedding_file.open ("wedding_file.txt");
      wedding_file<<"";
      cout<<"wedding deleted!";
}

void  guest::create(){
    ofstream guest_list;
    guest_list.open("guest_list.txt");

    char a;
    int i=0;
    char res;
    int count=0;
    int seats=1;
    int room_number;
    int guest_meal=0;
    int plusOne_meal=0;
    bool plusOne=false;



        cout<<"ENTER YOUR FIRST NAME \n";
        cin>>fname;
        cout<<"ENTER YOUR LAST NAME \n";
        cin>>lname;
        guest_list<<i+1<<". "<<"first name: "<<fname<<", last name: "<<lname;
        cout<<"do you have a plus one [y/n]:";
        cin>>a;
        if (a == 'y'){
          seats++;
          plusOne=true;
        }
        cout<<"do you want to reserve a room [y/n]:";
        cin>>res;

          if (res ='y'){
            guest_list<<" need a room ";

           }
           cout<<"select your meal: ";

           ifstream wedding_display;

           wedding_display.open("wedding_file.txt");
           string line;
           if (wedding_display.is_open())
           {
           while ( getline (wedding_display,line) )
           {
             // count++;
             // if (count ==2){
             cout << line << '\n';
           // }

           }
            cin >> guest_meal;
         } else cout << "Unable to open file";

        // wedding_display.close();

           if (plusOne){

             cout<<"select  plus one meal";
             cin >> plusOne_meal;
           }
           guest_list<<"---------------------------------------------\n";

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

    reservation_file.open("guest_list.txt",ios::app);
    reservation_file<<"number reserved rooms from "
    <<reservation::number_of_rooms<<endl;
    cout<<"room reserved.\n";

    }else{
         cout<<"no more avalaible room.\n";
    }
reservation_file.close();
}
