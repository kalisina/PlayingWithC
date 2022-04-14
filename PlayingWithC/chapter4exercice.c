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
