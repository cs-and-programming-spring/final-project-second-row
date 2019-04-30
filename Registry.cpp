/*
 * Allows the user to add their gift to the gift registry * as well as view the whole list if needed.
 * as well as view the whole list if needed.
 * 
 * @author Alex Buck
 */
#include <iostream>
#include <string>
using namespace std;

string addGifts();
void printGifts(string *gifts, int max); 

int main(){
    int choice = -1, slot = 0;  // Slot is used for adding to the end
                                // and for preventing the print method from printing any empty spaces
    string gifts[50];
    while(choice != 0){
        cout << "Welcome to the gift registry" << endl;
        cout << "Press 1 to add a gift to the registry" << endl;
        cout << "Press 2 to view all the gifts" << endl;
        cout << "Press 0 if you want to quit" << endl;
        cin >> choice;
        if(choice == 1){
            if(slot != 50){
                gifts[slot] = addGifts();
                slot++;
            }
            else
                cout << "Registry is full. You can't add any more gifts" << endl;
        }
        else if(choice == 2)
            printGifts(gifts, slot);
        else if(choice == 0)
            cout << "Thank you for using the gift registry" << endl;
        else
            cout << "Please enter a valid number" << endl;
    }
    system("pause");
    return 0;
}

string addGifts(){
    string newGift;
    cout << "What gift would you like to get? (Enter in the name)" << endl;
    cin >> newGift;
    return newGift;
}

void printGifts(string * gifts, int max){
    cout << "All the gifts will now be printed" << endl;
    for(int i = 0; i < max; i++)
        cout << gifts[i] << endl;
}

