//
//  chapter9exercice.c
//  PlayingWithC
//
//  Created by Realife Tech on 18/04/2022.
//

#include "chapter9exercice.h"

void createArrayOfIntegers(void) {
    puts("createArrayOfIntegers");
    
    // initialize the array
    int arr[MAX_ELEMENT_COUNT];
    
    // populate the array
    for (int i = 0; i < MAX_ELEMENT_COUNT; i++) {
        arr[i] = i * 3;
    }
    
    showOnlyOddValuesFromArray(arr);
}

void showOnlyOddValuesFromArray(int arr[MAX_ELEMENT_COUNT]) {
    for (int i = 0; i < MAX_ELEMENT_COUNT ; i++) {
        if (arr[i] % 2 != 0) {
            printf("arr[%d] = %d \n", i, arr[i]);
        }
        
    }
    
}

