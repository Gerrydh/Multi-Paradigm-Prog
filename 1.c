Store.cpp
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include "product.h"
using namespace std;

Product inv[100]; //array of 100 objects
int c = 100; //maximum products is 100

int menu(void) //display user options
{
int option;
cout << "Enter 1 to begin checkout or 0 to exit" << endl;


cin >> option;
return option;
};
void updateFile() //output results to a new file
{
ofstream newInvFile("newinventory.txt");

for (int p = 0; p < c; p++)
{
newInvFile << inv[p].getPLU() << " " << inv[p].getProductName() << " " << inv[p].getType() << " " << inv[p].getPrice() << " " << inv[p].getInventory() << endl;
}

}
void checkout(void)
{
double total = 0;
double quantity;
int input;
int PLU = 0;

do
{
PLU = 0;
cout << "Enter PLU code or (0) to exit" << endl;
cin >> input;
if (input == 0)
break;
for (int p = 0; p < c; p++)
{
if (inv[p].getPLU() == input)
{
PLU = p;
break;
}
}
/*if (PLU == -1)
{
cout << "Please enter a valid PLU" << endl;
continue;
}*/

if (inv[PLU].getType() == 1)// Determine whether product is sold by weight or units
{
cout << "Weight: ";
}
else
{
cout << "Quantity: ";
}

cin >> quantity;
total += quantity * inv[PLU].getPrice();
inv[PLU].updateInventory(quantity);
}
while (input != 0);

cout << "Total: $" << total << endl;

if (total > 50) //apply discount if total is over $50
{
total = total * 0.95;
cout << "Your purchase of over $50 qualifies you for a 5% discount. Total: $" << total << endl;
}

}
int main()
{
int plu;
string productName;
int type;
double price;
double inventory;
c = 0;

ifstream original ("inventory.txt"); //read from original inventory file
if (original.is_open())
{
while (!original.eof())
{
original >> plu >> productName >> type >> price >> inventory;

Product temp = Product(plu, productName, type, price, inventory);
inv[c] = temp;
c++;
}
original.close();
}
int option;

do
{
cout << "WELCOME!" << endl;

option = menu();
if (option == 1)
checkout();
else
updateFile();
}
while(option != 0);

system ("pause");
}