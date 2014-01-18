//
//  main.c
//  printftest
//
//  Created by Wolfgang Schreurs on 7/31/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (int argc, const char * argv[]) {

    // insert code here...
    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4e\n", 83.162);
    printf("%-6.2g\n\n", .0000009979);
    
    float x = 23.123;    
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n\n", x);

    /*
    int i, j;
    scanf("%d%f%d", &i, &x, &j);
    printf("i: %d, j: %d, x: %f", i, j, x);
    */
    
    return 0;
}

