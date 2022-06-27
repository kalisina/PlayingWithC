//
//  Strings.c
//  PlayingWithC
//
//  Created by Realife Tech on 20/06/2022.
//

#include "Strings.h"

void concat(char result[], const char str1[], int n1, const char str2[], int n2) {
    int i, j;
    
    for (i = 0; i < n1; ++i) {
        result[i] = str1[i];
    }
    
    for (j = 0; j < n2; ++j) {
        result[n1+ j] = str2[j];
    }
}
