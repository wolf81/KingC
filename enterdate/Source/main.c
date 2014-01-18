//
//  main.c
//  enterdate
//
//  Created by Wolfgang Schreurs on 7/31/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (void) {
    int day, month, year;
    
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("%d%d%d\n", year, month, day);
    
    return 0;
}

