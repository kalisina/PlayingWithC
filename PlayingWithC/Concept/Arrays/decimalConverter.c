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

