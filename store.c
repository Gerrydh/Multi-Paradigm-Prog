#include<stdio.h>
#include<conio.h>
#define MAX 5
int printinventory(int , int unit[] , float price[]);
int main()
{
    int item[MAX],unit[MAX],x,i;
    float price[MAX];
    printf("Please enter how many category items (up to 5) : ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
    printf("\nPlease enter Number of Units #%d : ",i+1);
    scanf(" %d",&unit[i]);
    printf("\nPlease enter the Unit Price #%d : ",i+1);
    scanf(" %f",&price[i]);
    }
    printinventory(x , unit , price);
    getch();
}

int printinventory (int  y, int unit[] , float price[])
{
    int i,j=0;
    float value[MAX];
    for(i=0;i<y;i++)
    {
        value[i] = (unit[i] * price[i]);
    }
    system("cls");
    printf("Item     Number of Units   Unit Price    Value ");
    printf("\n\n------------------------------------------------");
    for(i=1;i<=y;i++)
    {
        printf("\n%d",i);
        printf("\t  %d",unit[j]);
        printf("\t\t    $%.2f",price[j]);
        printf("\t$%.2f",value[j]);
        j++;
    }
    printf("\n\n------------------------------------------------");
    printf("\n\t\t\t\tTotal   $   ");
    getch();
}