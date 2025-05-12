#include <stdio.h> 
#include <string.h>

int main () {


    char ProductA[30];
    char ProductB[30];

    unsigned int stockProductA = 2000;
    unsigned int stockProductB = 16;

    float priceProductA = 20.00;
    float priceProductB = 30.00;

    unsigned int MinQuantityProductA = 20;
    unsigned int MinQuantityProductB = 20;

    double totalPriceProductA;
    double totalPriceProductB;

    int resultA;
    int resultB;

    double totalValueA;
    double totalValueB;



    // Show information about the product
    printf("Product A %s has a %u and your unit value is %.2f\n", ProductA, stockProductA, priceProductA);
    printf("Product B %s has a %u and your unit value is %.2f\n", ProductB, stockProductB, priceProductB);

    //

    resultA = stockProductA > MinQuantityProductA;
    resultB= stockProductB > MinQuantityProductB;

    printf ("The product %s has a minimum stock %d\n", ProductA, resultA);
    printf ("The product %s has a minimum stock %d\n", ProductB, resultB);

    // Calculate the total value of the product
    totalValueA = stockProductA * priceProductA;
    totalValueB = stockProductB * priceProductB;
    printf("The total value of the product A is %.2f\n", totalValueA);
    printf("The total value of the product B is %.2f\n", totalValueB);

    //compare
















    return 0;
}