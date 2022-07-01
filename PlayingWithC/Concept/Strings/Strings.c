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

    Entry entry0 = {"astute", "able to understand a situation quickly and see how to take advantage of it"};
    Entry entry1 = {"eschew", "to avoid something intentionally, or to give something up"};
    Entry entry2 = {"fathomless", "too deep to be measured"};
    Entry entry3 = {"imperious", "unpleasantly proud and expecting to be obeyed"};
    Entry entry4 = {"leeway", "extra time, space, materials, or the like, within which to operate; margin"};
    Entry entry5 = {"penultimate", "second from the last"};
    Entry entry6 = {"perspire", "polite word for sweat"};
    Entry entry7 = {"rejig", "organize differently"};
    Entry entry8 = {"solace", "comfort or consolation in a time of distress or sadness"};
    Entry entry9 = {"tiresome", "annoying and making you lose patience"};

    Entry dictionnary[10] = {entry0, entry1, entry2, entry3, entry4, entry5, entry6, entry7, entry8, entry9};
    char search[] = "rejig";
    int entries = 10; // number of words in the dic
    int entry = lookup(dictionnary, search, entries);
    (entry != -1) ? printf("meaning of '%s':\n%s", search, dictionnary[entry].definition) : printf("word not found!\n");
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

int lookup(const Entry dictionnary[], const char search[], const int entries) {
    /*
    int i;
    for (i = 0; i < dictionnaryCount; ++i) {
        if (equalStrings(search, dictionnary[i].word)){
            return i;
        }
    }
     */
    int low = 0;
    int high = entries -1;
    int mid, result;

    while (low <= high) {
        mid = (low + high) / 2;
        printf("mid = %d\n", mid);
        result = compareSrings(dictionnary[mid].word, search);

        if (result == -1) {
            low = mid + 1;
        } else if (result == 1) {
            high = mid - 1;
        } else {
            return mid; // word found
        }
    }
    return -1; // word not found
}

int compareSrings(const char str1[], const char str2[]) {
    int i = 0, answer;

    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        printf("here\n");
        ++i;
    }

    if (str1[i] < str2[i]) {
        printf("str1[i] < str2[i]\n");
        answer = -1;
    } else if (str1[i] == str2[i]) {
        printf("str1[i] == str2[i]\n");
        answer = -0;
    } else {
        printf("str1[i] > str2[i]\n");
        answer = 1; //str1[i] > str2[i]
    }
    return answer;
}
