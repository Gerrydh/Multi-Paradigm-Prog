printf("Please enter the product number to modify:");
scanf("%i", &productNumber);

while(fgets(line, sizeof(line), originalFile) != NULL)
{
    sscanf(line, "%i", &newInventory.productNumber);
    if (productNumber == newInventory.productNumber)
    {
        sscanf(line, "%i,%f,%f,%i,%c,%[^\n]", &newInventory.productNumber, 
                                              &newInventory.mfrPrice,
                                              &newInventory.retailPrice,
                                              &newInventory.numInStock,
                                              &newInventory.liveInv,
                                              newInventory.productName);
        printf("Current value is %i; please enter new value:", newInventory.numInStock );
        scanf("%i", &newInventory.numInStock );
        fprintf(NewFile, "%i,%f,%f,%i,%c,%s\n",newInventory.productNumber, 
                                               newInventory.mfrPrice,
                                               newInventory.retailPrice,
                                               newInventory.numInStock,
                                               newInventory.liveInv,
                                               newInventory.productName);
    }
    else
    {
        fputs(line, NewFile);
    }
}