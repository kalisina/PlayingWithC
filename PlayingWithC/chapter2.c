//
//  chapter2.c
//  PlayingWithC
//
//  Created by Realife Tech on 11/10/2021.
//

#include "chapter2.h"

// lesson 2.3
void printUserValue(void) {
    float x;
    printf("Please enter a number: \n");
    scanf("%f", &x);
    printf("Your number is : %f \n", x);
    return;
}

// lesson 2.4
void doubleTheUserValue(void) {
    float x, y;
    printf("Enter a number : \n");
    scanf("%f", &x);
    y = x * 2;
    printf("the double of your value is %f \n", y);
    return;
}
