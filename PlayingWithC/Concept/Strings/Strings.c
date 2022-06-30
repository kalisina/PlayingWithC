//
//  Strings.c
//  PlayingWithC
//
//  Created by Realife Tech on 20/06/2022.
//

#include "Strings.h"

void stringsExample(void) {
    
    /*
    const char s1[] = "Life is ";
    const char s2[] = "Strange";
    char res[64];
    concat(res, s1, s2);
    printf("%s", res);
    //*/
    
    /*
    const char s1[] = "hello world\0";
    const char s2[] = "emal is an afghan\0";
    const char s3[] = "inception is my favourite film\0";
    printf("s1 count = %d / s2 count = %d / s3 count = %d ", stringLength(s1), stringLength(s2), stringLength(s3));
    //*/
    
    /*
    const char s1[] = "emal is ";
    const char s2[] = "emal is";
    printf("'%s' == '%s?' %i \n", s1, s2, equalStrings(s1, s2));
    //*/
    
    /*
    char line[128];
    readLine(line);
    printf("line = %s", line);
     //*/
    
    /*
    const char s1[] = "Elvis Presely is the king of music";
    printf("'%s' containes = %d words \n", s1, countWords(s1));
    //*/

    //readLinesAndCountWords();

    Entry entry1 = {"astute", "able to understand a situation quickly and see how to take advantage of it"};
    Entry entry2 = {"fathomless", "too deep to be measured"};
    Entry entry3 = {"leeway", "extra time, space, materials, or the like, within which to operate; margin"};
    Entry entry4 = {"perspire", "polite word for sweat"};
    Entry entry5 = {"rejig", "organize differently"};
    Entry entry6 = {"solace", "comfort or consolation in a time of distress or sadness"};

    Entry dictionnary[6] = {entry1, entry2, entry3, entry4, entry5, entry6};
    char search[] = "rejig";
    int index = lookup(dictionnary, search, stringLength(search));
    index > 0 ? printf("index of %s = %d", search, index) : printf("word not found!");
}

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

void readLinesAndCountWords(void) {
    char text[64];
    bool endOfText = false;
    int totalWords = 0;

    while (!endOfText) {
        readLine(text);
        if (text[0] == '\0') {
            endOfText = true;
        } else {
            totalWords += countWords(text);
        }
    }
    printf("total words = %d",totalWords);
}

int lookup(const Entry dictionnary[], const char search[], const int dictionnaryCount) {
    int i;
    for (i = 0; i < dictionnaryCount; ++i) {
        if (equalStrings(search, dictionnary[i].word)){
            return i;
        }
    }
    return -1;
}
