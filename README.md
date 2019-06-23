# grocery_list
Assignment 2 Intro programming 2

Emily Zastenchik
Assignment 2
SDM:

Problem: 

Display a grocery list menu and have the user select an option and input the quantity. 
After the user has entered all grocery items, display receipt and total.
 
Analysis:

    INPUT 
    
    overloaded istream operater - used to input grocery items from text file
    int quantity - quantity of grocery items
    double sum - total of order
    string code - input item code from grocerylist menu
    fs >> n;		//uses overloaded operator istream to input elements from textfile to 
     grocery_item.push_back(n);

    OUTPUT 
    
    print() function	-	used to print grocery menu display
    overloaded ostream operator - used to display receipt
    Display grocery item inventory menu
    Displays receipt of purchases and prices
    Output total as sum

    FUNCTIONS 
    
    vector<GroceryItem> menu()		//fills grocery_item vector from textfile using fstream
    bool add_purchase(double val)	//checks if purchase exceeds credit limit

Design:

    Create customer
    Display the grocery list menu
    Assign vector of GroceryItem "inventory" to the menu function
    Declare variables
    Initialize char answer
    While loop -
    Ask user for item code
      if item code is valid, ask user for quantity
    if add purchase is true
      calculate the sum
      add selected quantity of grocery item to shoppingCart vector using the push_back function
    Decrement quantity
    Use ostream to output shoppingCart contents
    Display double sum as total
