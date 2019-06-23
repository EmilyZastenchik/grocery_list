#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "GroceryItem.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Customer
{
public:
  Customer(string name, string address, string city, string state, string zipcode);  
  Customer();
  void increase_limit(double amount);
  string get_name()  const;
  string get_address() const;
  string get_city()  const;
  string get_state() const;
  string get_zipcode() const;
  double get_credit_limit() const;
  double get_unpaid_balance() const;
  bool add_purchase(double val);
  void pay_balance(double payment);
  vector<GroceryItem> shoppingCart;

private:

  string name;
  string address;
  string city;
  string state;
  string zipcode;
  double credit_limit;
  double year_to_date_purchases;
  double unpaid_balance;

};
#endif
