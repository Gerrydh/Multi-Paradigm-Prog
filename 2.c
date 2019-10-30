Product.cpp

#ifndef store_product_h
#define store_product_h

#include <string>
#include <iostream>
using namespace std;

class Product
{
private:
int plu;
string productName;
int type;
double price;
double inventory;
public:
Product();
Product(int, string, int, double, double);
int getPLU();
string getProductName();
int getType();
double getPrice();
double getInventory();
double updateInventory(double);

};
#endif
