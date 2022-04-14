//
//  chapter5exercice.c
//  PlayingWithC
//
//  Created by Realife Tech on 14/04/2022.
//

#include "chapter5exercice.h"

void ascendingNumbers(void) {
    int n1, n2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &n1, &n2);
    if (n1 < n2) {
        printf("n1: %d is smaller to n2: %d \n", n1, n2);
    } else if (n1 > n2) {
        printf("n2: %d is smaller to n1: %d \n", n2, n1);
    } else {
        printf("n1 = n2 = %d \n", n1);
    }
}
