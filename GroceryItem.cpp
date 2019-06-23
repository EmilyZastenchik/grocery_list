#include<iostream>
#include<cstdlib>
#include<vector>
#include "GroceryItem.h"

using namespace std;


GroceryItem::GroceryItem(string iName, string iCode, double iPrice)
{
	itemName = iName;
	itemCode = iCode;
	itemPrice = iPrice;
		
}
GroceryItem::GroceryItem()
{
	itemName = " ";
	itemCode = " ";
	itemPrice = 0;
} 
GroceryItem::GroceryItem(const GroceryItem& a)
{
	itemName = a.getItemName();
	itemCode = a.getItemCode();
	itemPrice = a.getItemPrice();
} 
void GroceryItem::setItemName(string)
{
	itemName = itemName;	
}
void GroceryItem::setItemCode(string)
{
	itemCode = itemCode;
}
void GroceryItem::setItemPrice(double)
{
	itemPrice = itemPrice;
}
string GroceryItem::getItemName() const
{
	return itemName;
}
string GroceryItem::getItemCode() const
{
	return itemCode;
}
double GroceryItem::getItemPrice() const
{
	return itemPrice;
}
void GroceryItem::print() const	//use to print menu - grocery  item vector inventory
{
	cout << itemCode << '\t' << itemName << '\t' << itemPrice  << endl;
}
bool operator<(const GroceryItem& left, const GroceryItem& right)
{
		return (left.getItemPrice() < right.getItemPrice());
}
bool operator>(const GroceryItem& left, const GroceryItem& right)
{
		return (left.getItemPrice() > right.getItemPrice());
}
ostream& operator<<(ostream& out, const GroceryItem& value)	//use to print receipt
{
	out << value.getItemName() << '\t'  << '\t' << value.getItemPrice() << endl;
	return out;
}
istream& operator>>(istream& in, GroceryItem& r)	//input grocery menu from text filw
{
	getline(in, r.itemName);
	getline(in, r.itemCode);
	in >> r.itemPrice;
	string remainder;
	getline(in, remainder);
	return in;
}
























