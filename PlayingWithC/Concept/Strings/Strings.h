//
//  Strings.h
//  PlayingWithC
//
//  Created by Realife Tech on 20/06/2022.
//

#ifndef Strings_h
#define Strings_h

#include <stdio.h>
#include <stdbool.h>

typedef struct entry_ { // underscore added on purpose
    char word[16];
    char definition[128];
} Entry;

void stringsExample(void);
void concat(char result[], const char str1[], const char str2[]);
int stringLength(const char str[]);
bool equalStrings(const char str1[], const char str2[]);
void readLine(char buffer[]);
bool alphabetic(const char c);
int countWords(const char str[]);
void readLinesAndCountWords(void);
int lookup(const Entry dictionnary[], const char search[], const int entries);
int compareSrings(const char str1[], const char str2[]);

#endif /* Strings_h */
