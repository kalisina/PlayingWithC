//
//  decimalConverter.c
//  PlayingWithC
//
//  Created by Realife Tech on 29/04/2022.
//

#include "decimalConverter.h"

void decimalToBinary(void) {
    unsigned int decimalValue = 78340;
    unsigned int n = decimalValue;
    unsigned int quotient[100];
    unsigned int remainder[100];
    unsigned int binary[100];
    unsigned int index = 0;
    unsigned int quotientLength = 0;
    unsigned int remainderLength = 0;
    unsigned int binaryLength = 0;
    unsigned int binaryIndex = 0;
     
    unsigned int q, r = 0;
    while (n > 0) {
        q = n / 2; // quotient
        r = n % 2; // remainder
        
        quotient[index] = q;
        remainder[index] = r;
        n = q;
        
        quotientLength++;
        remainderLength++;
        index++;
    }
    
    printf("\n\n");
    printf("Remainder         Quotient \n");
    printf("---------         ---------- \n");
    
    for (int i = 0; i < remainderLength; i++) {
        printf("%5d  %16d \n", remainder[i], quotient[i]);
    }
    
    printf("\n\n");
    
    for (int i = remainderLength - 1; i >= 0; i--) {
        binary[binaryIndex] = remainder[i];
        binaryIndex++;
        binaryLength++;
    }
    
    printf("%d = (", decimalValue);
    for (int i = 0; i < binaryLength ; i++) {
        printf("%d ", binary[i]);
    }
    printf(") \n");
}

void decimalToHexadecimal(void) {
    unsigned int dividend = 2673443;
    unsigned int divisor = 16;
    unsigned int quotient;
    unsigned int remainder;
    
    unsigned int remainders[100] = {0};
    unsigned int remaindersIndex = 0;
    unsigned int remaindersSize = 0;
    
    //char chars[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    
    unsigned int n = dividend;
    
    while (quotient != 0) {
        quotient = n / divisor;
        remainder = n % divisor;
        
        remainders[remaindersIndex] = remainder;
        remaindersIndex++;
        remaindersSize++;
        n = quotient;
        printf("quotient = %d \n", quotient);
        printf("remainder = %d \n\n", remainder);
    }
    
    printf("%d = ", dividend);
    for (int i = remaindersSize - 1; i >= 0; i--) {
        
        switch (remainders[i]) {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d", remainders[i]);
        }
        
    }
    printf("\n\n");
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
    printf("\n");
}

