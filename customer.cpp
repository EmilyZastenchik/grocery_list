#include "customer.h"
#include "GroceryItem.h"

Customer::Customer(string n, string a, string c, string s, string z)
{
  name = n;
  address = a;
  city = c;
  state = s;
  zipcode = z;
	credit_limit = 100;
  	year_to_date_purchases = 0;
  	unpaid_balance = 0;
}
Customer :: Customer()
{
	credit_limit = 100;
  	year_to_date_purchases = 0;
  	unpaid_balance = 0;	
}
void Customer::increase_limit(double amount)
{
  credit_limit += amount;
}
string Customer::get_name() const
{
  return name;
}
string Customer::get_address() const
{
  return address;
}
string Customer::get_city() const
{
  return city;
}
string Customer::get_state() const
{
  return state;
}
string Customer::get_zipcode() const
{
  return zipcode;
}
double Customer::get_credit_limit() const
{
  return credit_limit;
}
double Customer::get_unpaid_balance() const
{
  return unpaid_balance;
}	
bool Customer::add_purchase(double val)
{
  if ( (val + unpaid_balance) > credit_limit )
  {
    cout << "Not enough credit limit. Purchase cannot be completed.\n";
    return false;
  }

  year_to_date_purchases += val;
  unpaid_balance += val;
  cout << "Purchase successful.\n"; //trace message
  return true;
		 
}
void Customer::pay_balance(double payment)
{
  unpaid_balance -= payment;
}
