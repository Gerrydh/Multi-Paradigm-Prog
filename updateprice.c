#include <stdio.h>
#include <conio.h>

struct stores
{
   char name[20];
   float price;
   int quantity;
};

float mul(struct stores *stock);
void update(struct stores*, float, int);

void main()
{
   float p_incre, value;
   int q_incre;

   struct stores item = {"XYZ", 25.75, 12};
   struct stores *ptr = &item;

   clrscr();

   printf("\nInput increment values : ");
   printf("Price increment and quantity increment\n");
   scanf("%f %d", &p_incre, &q_incre);

   /**********************************************/

      update(&item, p_incre, q_incre);
   /**********************************************/


   printf("Updated values of item \n\n");
   printf("Name  : %s\n", ptr->name);
   printf("Price  : %f\n", ptr->price);
   printf("Quantity  : %d\n", ptr->quantity);

   /**********************************************/
value = mul(&item);
   /**********************************************/


   printf("\nValue of the item = %f\n", value);

   getch();
}

  void update(struct stores *product, float p, int q)
  {
     product -> price += p;
     product -> quantity += q;
  }


  float mul(struct stores *stock)
  {
     return(stock->price * stock ->quantity);
  }


