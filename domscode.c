#include <stdio.h>
#include <stdlib.h>

struct Product{
    char* name;
    double price;
}
int main(){
    double budget = 100.0;
    double shopCash = 2000.0;
    int quantity = 1;
}

struct Product a = {"Pot Noodle",1.50};
struct Product b = {"Beans", 0.95};
struct Product cp[]= {a,b};
double cost = 0;

for(inti=0; i<2; i++)
{
    cost += cp[i].price * quantity;
}
if(cost<=budget){
    budget -= cost;

    shopCash += cost;

    printf("\nThe customer can buy everything they wanted and now the shop has %.2f and the customer has %.2f remaining\n", shopCash, budget);
}
}
    