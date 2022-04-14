//
//  chapter4exercice.c
//  PlayingWithC
//
//  Created by Realife Tech on 12/10/2021.
//

#include "chapter4exercice.h"


void displayAsciiCode(void) {
    char c;
    puts("Please enter a character");
    scanf("%c", &c);
    printf("The ASCII code for your character is %d \n", c);
}

void toRename(void) {
    putchar('A');
    putchar(65);
    puts("Hello");
    
    char caract = 'A';
    printf("caract = %c \n", caract);
    printf("caract = %d", caract);
    
    printf("\n");
    printf("\n");
}

void divideNumbers(void) {
    int n1, n2;
    puts("Enter two different integers separated by a space");
    scanf("%d %d", &n1, &n2);
    
    int quotien = n1 / n2;
    int remainder = n1 % n2;
    printf("quotient of n1 / n2 = %d \n", quotien);
    printf("remainder of n1 / n2 = %d \n", remainder);
    
    int l;
    printf("enter a third number \n");
    scanf("%d", &l);
    int res = (l * remainder) % 256;
    printf("res = %d \n", res);
    char charValue = res+'0';
    printf("charValue = %c \n", charValue);
    
}
