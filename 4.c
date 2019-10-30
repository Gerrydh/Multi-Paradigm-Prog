product.h

#include "product.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Product::Product()
{
plu = 0;
productName = "none yet";
type = 0;
price = 0;
inventory = 0;
}
Product::Product(int pl, string pn, int t, double pr, double i)
{
plu = pl;
productName = pn;
type = t;
price = pr;
inventory = i;
}
int Product::getPLU()
{ return plu;}

string Product::getProductName()
{ return productName;}

int Product::getType()
{ return type;}

double Product::getPrice()
{ return price;}

double Product::getInventory()
{ return inventory;}

double Product::updateInventory(double quantity)
{
if (quantity > inventory)
cout << "This item is not in stock." << endl;
else inventory -= quantity;
return inventory;
}