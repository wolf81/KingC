//
//  main.c
//  taxcalc
//
//  Created by Wolfgang Schreurs on 7/30/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (void) {
    float tax_percentage = 5.0, amount;
    
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount * ((100.0 + tax_percentage) / 100.0));
    
    return 0;
}

// ssh -p 10022 -l wolf mobowski.bounceme.net
// ssh://[user@]host.xz[:port]/path/to/repo.git/
// git://host.xz[:port]/path/to/repo.git/
