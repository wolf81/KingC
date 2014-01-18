//
//  main.c
//  enterproduct
//
//  Created by Wolfgang Schreurs on 7/31/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (void) {
    int number, day, month, year;
    float price;
    
    printf("Enter item number: ");
    scanf("%d", &number);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    
    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\t\tPrice\t\tDate\n");
    printf("%d\t\t\t$%7.2f\t%d/%d/%d\n", number, price, day, month, year);
    return 0;
}

