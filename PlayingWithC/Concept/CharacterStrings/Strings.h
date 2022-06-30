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

void stringsExample(void);
void concat(char result[], const char str1[], const char str2[]);
int stringLength(const char str[]);
bool equalStrings(const char str1[], const char str2[]);
void readLine(char buffer[]);
bool alphabetic(const char c);
int countWords(const char str[]);
void readLinesAndCountWords(void);

#endif /* Strings_h */
