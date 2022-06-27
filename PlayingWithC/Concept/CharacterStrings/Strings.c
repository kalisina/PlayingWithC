//
//  Strings.c
//  PlayingWithC
//
//  Created by Realife Tech on 20/06/2022.
//

#include "Strings.h"

void concat(char result[], const char str1[], const char str2[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; ++i) {
        result[i] = str1[i];
        printf("char = %c \n", result[i]);
    }
    
    for (j = 0; str2[j] != '\0'; ++j) {
        result[i+j] = str2[j];
        printf("char = %c \n", result[i+j]);
    }
    result[i+j] = '\0'; // add \0 to the end of the string
}

int stringLength(const char str[]) {
    int count = 0;
    do {
        printf("str[%d] = %c \n", count, str[count]);
        ++count;
    } while (str[count] != '\0');
    return count;
}
