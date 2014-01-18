//
//  main.c
//  rpncalc
//
//  Created by Wolfgang Schreurs on 12/26/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void) {
    // stack full ...
    printf("Expression is too complex.");
}

void stack_underflow(void) {
    // stack empty ...
    printf("Not enough operands in expression.");
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;   
}

bool is_full(void) {
    return top == STACK_SIZE;   
}

void push(int i) {
    if (is_full()) {
        stack_overflow();   
    } else {
        contents[top++] = i;   
    }
}

int pop(void) {
    if (is_empty()) {
        stack_underflow();
        return 0;
    } else {
        return contents[--top];
    }
}

int main (int argc, const char * argv[]) {

    // read string until terminator (\n), char by char ...
    char ch;
    float total = 0;
    
    printf("Enter an RPM expression:");
	while ((ch = getchar()) != '\n') {
        scanf(" %c", &ch);
         
        int test1;
        
        switch (ch) {
            case '/': /* divide */   
                test1 = pop();
                printf("%d", test1);
                
                total += pop() / pop();
                printf("\n devision result: %f", total);
                break;
            case '*': /* multiply */    break;
            case '+': /* add */         break;
            case '-': /* subtract */    break;
            case '=': /* total */       break;
            case 'q': printf("\nquit"); break;
            default: 
                /* push onto stack */
                printf("pushing: %c", ch);
                
                push(ch);
                break;
        }
    }    
    
    printf("/nValue of expression: %d", total);

    return 0;
}

