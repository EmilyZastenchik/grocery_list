#ifndef GROCERY_ITEM_H
#define GROCERY_ITEM_H

#include <iostream>
#include <string>

using namespace std;
class GroceryItem
{
 public:
   // constructors
   GroceryItem(string, string, double);
   GroceryItem();	//default constructor
   // copy constructor
   GroceryItem(const GroceryItem&);
   // mutators
   //void read();
   void setItemName(string itemName);
   void setItemCode(string itemCode);
   void setItemPrice(double itemPrice);
   
   // accessors
   string getItemName() const;
   string getItemCode() const;
   double getItemPrice() const;
   void print() const;
   /*friend functions allow nonmember functions access to 
   member data & functions*/
   friend ostream& operator<<(ostream& out, const GroceryItem& value);
   friend istream& operator>>(istream& in, GroceryItem& r); 
   friend bool operator<(const GroceryItem& left, const GroceryItem& right);
   friend bool operator>(const GroceryItem& left, const GroceryItem& right);
   friend bool operator<=(const GroceryItem& left, const GroceryItem& right);
   friend bool operator>=(const GroceryItem& left, const GroceryItem& right);
   friend bool operator==(const GroceryItem& left, const GroceryItem& right);
   friend bool operator!=(const GroceryItem& left, const GroceryItem& right);
 private:
   string itemName;
   string itemCode;
   double itemPrice;
   


};      
#endif

ostream& operator<<(ostream& out, const GroceryItem& value);
 istream& operator>>(istream& in, GroceryItem& r); 
 bool operator<(const GroceryItem& left, const GroceryItem& right);
 bool operator>(const GroceryItem& left, const GroceryItem& right);
 bool operator<=(const GroceryItem& left, const GroceryItem& right);
 bool operator>=(const GroceryItem& left, const GroceryItem& right);
 bool operator==(const GroceryItem& left, const GroceryItem& right);
 bool operator!=(const GroceryItem& left, const GroceryItem& right);
