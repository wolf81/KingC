//
//  main.c
//  spherevolume
//
//  Created by Wolfgang Schreurs on 7/30/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#include <stdio.h>

int main (void) {
    float volume, radius, pi = 3.141592654;
    
    printf("radius: ");
    scanf("%f", &radius);
    volume = (4.0 / 3.0) * pi * radius * radius * radius;
    printf("volume: %.2f", volume);
    
    return 0;
}

