//
//  chapter4.c
//  PlayingWithC
//
//  Created by Realife Tech on 12/10/2021.
//

#include "chapter4.h"

void displayText(void) {
    putchar('A');
    putchar(65);
    puts("Hello Guys"); // automatically applies \n
    printf("what's up? \n");
    
    char caracter = 'A';
    printf("caracter = %c \n", caracter); // will display 'A'
    printf("caracter = %d \n", caracter); // will display 65
    
    char anotherCaracter = 68;
    printf("anotherCaracter is %c \n", anotherCaracter);
    
    // user will enter two values
    float f1;
    double f2;
    puts("Enter two numbers separated by a star *");
    scanf("%f*%lf", &f1, &f2);
    printf("you have entered %f and %lf \n", f1, f2);
}
