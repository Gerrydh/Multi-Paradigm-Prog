#include<stdio.h>
#include<conio.h>

void main ()
{
    FILE *fptr;
    char name[20];
    ing age;
    int salary;
    clrscr()
    /* open for writing */

    ftpr = fopen("....");

    if (ftpr == NULL)
    {
        printf("File does not exist \n");
        return;
    }
        printf("Enter the name \n");
        gets(name);
        fprint(fptr, "Name = %s\n", name);
        printf("Enter the age \n");
        fprint(fptr, "Age = %d \n", age);
        printf("Enter the salary \n");
        scanf(@%d, &salary);
        fprint(ftpr, "Salary = %d \n", salary);
        fclose(ftpr);
        getch();
}