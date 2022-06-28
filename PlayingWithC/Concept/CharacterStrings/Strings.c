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

bool equalStrings(const char s1[], const char s2[]) {
    int i = 0;
    bool areEqual = false;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        ++i;
    }
    
    if (s1[i] == '\0' && s2[i] == '\0') {
        areEqual = true;
    }
    return areEqual;
}

void readLine(char buffer[]) {
    char character;
    int i = 0;
    puts("enter a sentence ");
    do {
        character = getchar();
        buffer[i] = character;
        ++i;
    }
    while( character != '\n' );
    buffer[i-1] = '\0';
}

bool alphabetic(const char c) {
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
        return true;
    } else {
        return false;
    }
}

int countWords(const char str[]) {
    int i, wordCount = 0;
    bool lookingForWord = true; //flag

    for (i = 0; str[i] != '\0'; ++i) {
        if (alphabetic(str[i])) {
            if (lookingForWord) {
                ++wordCount;
                lookingForWord = false;
            }
        } else {
            lookingForWord = true;
        }
    }
    return wordCount;
}
