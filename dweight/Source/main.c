//
//  main.c
//  dweight
//
//  Created by Wolfgang Schreurs on 7/30/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (void) {
    int height = 0, length = 0, width = 0, volume;
    
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter lenght of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    
    volume = height * length * width;
    
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
    
    return 0;
}
