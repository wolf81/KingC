//
//  main.c
//  isbndissect
//
//  Created by Wolfgang Schreurs on 7/31/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (int argc, const char * argv[]) {
    int prefix, group, publisher, itemnumber, checkdigit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &itemnumber, &checkdigit);
    printf("GSI Prefix: %d\n", prefix);
    printf("Group Identifier: %d\n", group);    
    printf("Publisher Code: %d\n", publisher);    
    printf("Item Number: %d\n", itemnumber);    
    printf("Check Digit: %d\n", checkdigit);    
    
    return 0;
}

