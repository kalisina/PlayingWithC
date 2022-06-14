//
//  decimalConverter.c
//  PlayingWithC
//
//  Created by Realife Tech on 29/04/2022.
//

#include "decimalConverter.h"

void decimalToBinary(void) {
    long int numberToConvert;
    int convertedNumbers[64];
    int index = 0;
    
    printf("Enter a number to convert: ");
    scanf("%ld", &numberToConvert);

    while (numberToConvert != 0) {
        convertedNumbers[index] = numberToConvert % 2; // remainder
        numberToConvert = numberToConvert / 2; // quotient
        ++index;
    }
    
    printf("converted numnber = ");
    for (--index; index >= 0; --index) {
        printf("%d", convertedNumbers[index]);
    }
}

void decimalToHexadecimal(void) {
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    long int numberToConvert;
    int base = 16;
    int convertedNumbers[64];
    int nextDigit, index = 0;
    
    printf("Enter a number to convert: ");
    scanf("%ld", &numberToConvert);
    
    while (numberToConvert != 0) {
        convertedNumbers[index] = numberToConvert % base;
        numberToConvert = numberToConvert / base;
        ++index;
    }
    
    printf("converted number: ");
    for (--index; index >= 0; --index) {
        nextDigit = convertedNumbers[index];
        printf("%c", baseDigits[nextDigit]);
    }
}

void decimalToAnyBase(void){
    const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int convertedNumber[64];
    long int numberToConvert;
    int nextDigit, base, index = 0;
    
    printf("Please enter a number to convert: ");
    scanf("%ld", &numberToConvert);
    printf("In what base? ");
    scanf("%i", &base);
    
    do {
        convertedNumber[index] = numberToConvert % base;
        ++index;
        numberToConvert= numberToConvert / base;
    }
    while (numberToConvert !=0 );
        
    printf("converted number = ");
    for (--index; index >= 0; --index) {
        nextDigit = convertedNumber[index];
        printf("%c ", baseDigits[nextDigit]);
    }
}

