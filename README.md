# Wedding Program
Team Second Row
Memebers Alex B., David A. M., Issouf K., Kristen H., Neil Y., Nick S., & Rob M.

This program is for two types of users - guests and the wedding planner

PSEDUO CODE DOWN BELOW
{
First menu "Guest or Wedding Planner?" (Issouf - main menu and declaration of functions)

If Wedding Planner - must give password
         - Displays menu for Wedding Planner to choose from (1-4)
             1 - Sets the maximum amount of guests [testing purposes, let's do 5] (David A.) 
             2 - Input and edit the food menu [let's do 3 meals beef, chicken, vegetarian as a base] (Rob)
             3 - Input and edit the gift registry. Must always have cash as an option (Alex) 
             4 - Displays all guests that signed in (this can be done last) 
             
If Guest - Input name
         - If maximum amount of guests are reached, will display "Sorry, no more room :("
         - Display menu for guest to choose from (1-3) (Kristen) 
             1 - Ask if they want to choose a meal
                 - Display Beef, Chicken, Vegetarian 
                 - Returns to menu after chosen option
             2 - Ask if they want to register a gift
                 - If yes, displays list of 5 gifts and the option to give cash
                 - If no, exits the menu
             3 - Ask if they did book a room (Neil)
                 - If yes, asks for name and credit card information to forward to the hotel
                 - If no, exits the menu
}

  Guests have the ability to:
        - sign in individually
        - choose a meal
        - register a gift
        - book a hotel room 
  The Wedding planner has the ability to:
        - set the maximum amount number seats 
        - set up the menu for guests to choose a meal from 
        - set up the registry [can choose gifts or choose cash]
        - overlook all the guests that signed in 
                  (name, meal, gift, yes or no if guest booked a hotel room)
                  
  The Wedding Planner also has their own login
    Password: _____
