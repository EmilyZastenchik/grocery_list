

/*
Emily Zastenchik
Assignment 2
SDM:
Problem: Display a grocery list menu and have the user select an option and input the quantity. 
After the user has entered all grocery items, display receipt and total.
 
Analysis:

INPUT - 
overloaded istream operater - used to input grocery items from text file
int quantity - quantity of grocery items
double sum - total of order
string code - input item code from grocerylist menu
fs >> n;		//uses overloaded operator istream to input elements from textfile to 
 grocery_item.push_back(n);

OUTPUT - 
print() function	-	used to print grocery menu display
overloaded ostream operator - used to display receipt
Display grocery item inventory menu
Displays receipt of purchases and prices
Output total as sum

FUNCTIONS - 
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


*/

#include <iostream>
#include <vector>
#include <fstream>
#include "GroceryItem.h"
#include "customer.h"
vector<GroceryItem> menu ();
int main()
{

 	Customer me("Name", "address", "city", "state", "zipcode"); //create customer
   
  vector<GroceryItem> inventory = menu();
   int quantity;
   double sum;
   string name;
   string code;
   
   double price;
	char answer = 'Y';
	while((answer) == toupper('y'))		//toupper function changes input to a capital letter
	{
	cout << "Please enter an item code to purchase: ";
	cin >> code;
	for(int i = 0; i < inventory.size(); ++i)
	{
	    if( ("item code = " + code) == inventory[i].getItemCode())	// iterates through vector of grocery items to find of the input code is valid
	    {
			cout << "Enter quantity: ";
			cin >> quantity;
			if(me.add_purchase(inventory[i].getItemPrice())*quantity)	//passes price * quantity to add purchase
			{
				sum += quantity * inventory[i].getItemPrice();		//calculate sum = quantity*price
				while(quantity > 0)
				{
					me.shoppingCart.push_back(inventory[i]); 	//pushes back a grocery item into the shopping cart vector
					--quantity;					//decrements quantity after placed in vector shoppingCart
				}
			}
			
			
	    }
   }
	cout << "Would you like to make another purchase? (Enter 'y' or 'n')";
	cin >> answer;
	} 
	for(int i = 0; i < me.shoppingCart.size(); ++i)
	{
     	cout << me.shoppingCart[i] << endl;		//uses ostream to display
    }
    	cout << "Total" << '\t' << '\t' << sum << endl;
    	
    	
   system("pause");
   return 0;
}
vector<GroceryItem> menu()
{
    std::fstream fs ("groceryList.txt", std::fstream::in | std::fstream::out);
     vector<GroceryItem> grocery_item;
     GroceryItem n;
   while(!fs.eof())	// fs >> price // cannot use getline for double
   {
      fs >> n;		//uses overloaded operator istream
      grocery_item.push_back(n);
   }
   fs.close();
   for(int i = 0; i < grocery_item.size(); ++i)
   {
      grocery_item[i].print();
   }	

    return grocery_item;
} 
