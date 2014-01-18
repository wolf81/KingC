//
//  main.c
//  loancalc
//
//  Created by Wolfgang Schreurs on 7/30/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (void) {
    float interest_rate, monthly_payment, balance;
    
    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    interest_rate = ((interest_rate / 100.0) / 12.0) + 1.0;
    
    balance = (balance * interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", balance);
    balance = (balance * interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", balance);
    balance = (balance * interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", balance);
    
    return 0;
}

