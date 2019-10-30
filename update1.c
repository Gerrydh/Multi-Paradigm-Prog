/*here's my structure*/

struct inventory_s
{
    int productNumber;
    float mfrPrice;
    float retailPrice;
    int numInStock;// 4th column
    char liveInv;
    char productName[PRODUCTNAME_SZ +1];
};

/* My text file looks something like: */
1000,1.49,3.79,10,0,Fish Food
2000,0.29,1.59,100,1,AngelFish
2001,0.09,0.79,200,1,Guppy
5000,2.40,5.95,10,0,Dog Collar Large
6000,49.99,129.99,3,1,Dalmation Puppy

/*Here's my function so far*/

int updateStock(void)
{
    struct inventory_s newInventory;
    int productNumber;
    char line[50];

    FILE* originalFile = fopen("stuff.txt", "r"); //opens and reads file
    FILE* NewFile = fopen("stuffCopy.txt", "w"); //opens and writes file
    if(originalFile == NULL || NewFile == NULL)
    {
        printf("Could not open data file\n");
        return -1;
    }
    printf(" Please enter the product number to modify:");
    scanf(" %i", &productNumber);

    printf("Current value is %i; please enter new value:", &newInventory.numInStock );
    while(fgets(line, sizeof(line), originalFile) != NULL)
    {
        sscanf(line, "%d,%*f,%*f,%i", &newInventory.productNumber, &newInventory.mfrPrice, &newInventory.retailPrice, &newInventory.numInStock);
        if (productNumber == newInventory.productNumber)
        {
            fputs(line, NewFile);
            //fscanf(NewFile, "%s", &newInventory.productName);
            printf(" %i",newInventory.numInStock);
        }
    }

    fclose(originalFile);
    fclose(NewFile);
    // remove("stuff.txt");
    //rename("stuffCopy.txt", "inventory.txt");

    return 0;
}