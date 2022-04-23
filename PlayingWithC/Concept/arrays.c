//
//  arrays.c
//  PlayingWithC
//
//  Created by Realife Tech on 20/04/2022.
//

#include "arrays.h"

void showArray(int *arr, int length); // mandatory declaration 

void testingArray(void) {
    /*
     [Declare array]
        <type> <array_name>[X]; // Declare with random values
     
     [Init]
        array[5] = {val1, val2, val3, val4, val5};
        array[5] = {0} // each item will have the value 0
        array[5] = {4} // only the first item will get 4, the rest will have 0
     
     [Access the array]
        array[X]     : get tbe element at the indice X
        array        : address of the array
        *array       : first element of the array
        *(array + x) : get tbe element at the indice X
     
     (NOTE)
        array[5] = *(array + 4)
     */
    
    puts("testingArray");
    
    int myArr[5] = {2,3,5,7,11};
    printf("myArr address : %x \n", myArr); // efbff3d0
    printf("%d \n", *myArr); // {2}
    printf("%d \n", *(myArr + 4)); // {11}
    
    showArray(myArr, 5);
    getchar(); // break line
    
}

void showArray(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        printf("{%d} ", arr[i] );
    }
}

void ratingCounters(void) {
    /*
     task: ask 6 users to give a rating between one and ten
     each array item  will store the number of ratings related to it's index value
     if users enter: 7, 8, 7, 5, 3, 9
     ratingCounters will be [0,0,1,0,1,0,2,0,1,0]
    */
    
    // 1 - declare array and var
    unsigned int numberOfAnswersWanted = 6;
    unsigned int ratingCounters[11] = {0}; // init all values to 0
    unsigned int response = 0;
    
    // 3 - ask users to enter data
    for (int i = 0; i < numberOfAnswersWanted; i++) {
        printf("what is your rating? (enter a digit between 0 and 10) \n");
        scanf("%d", &response);
        
        if (response < 0 || response > 10) {
            printf("error, %d is an incorrect number \n", response);
        } else {
            printf("your rating is : %d \n", response);
            ratingCounters[response] += 1;
        }
    }
    
    printf("\n\n");
    printf("Rate     Number of users : \n");
    printf("----     ----------------- \n");
    
    for (int i = 0; i < 11; i++) {
        printf("%4d %14d \n", i, ratingCounters[i]);
    }
}

void fibonacci(void) {
    /*
     f(0) = 0;
     F(1) = 1;
     F(n) = F(n-1) + F(n-2) where n >= 2
    */
    
    unsigned long int fibonacciNumbers[50] = {0}; // init all values to 0
    fibonacciNumbers[1] = 1; // F(1) = 1
    
    for (int i = 0; i < 50; i++) {
        if (i >= 2) {
            fibonacciNumbers[i] = fibonacciNumbers[i-1] + fibonacciNumbers[i-2];
        }
        printf("F(%d) = %lu \n", i, fibonacciNumbers[i]);
    }
}

void primeNumbers(void) {
    unsigned int n = 1000;
    unsigned int isPrimeNumber;
    unsigned int primeNumbers[1000] = {0};
    primeNumbers[0] = 2;
    
    // need size and position to insert value to the array
    unsigned int primeNumbersLength = 1;
    unsigned int position = 1;
    
    
    for (int i = 3; i < n; i++) {
        
        isPrimeNumber = 1; // reset the value
        
        //for (int j = 0; j < primeNumbersLength; j++) {
        for (int j = 0; j < primeNumbersLength; j++) {
            if (i % primeNumbers[j] == 0) {
                printf("%d can be divided by %d, so it's not a prime number \n", i, primeNumbers[j]);
                isPrimeNumber = 0;
                break;
            }
        }
        
        if (isPrimeNumber) {
            printf("Congratulations, you've found a new prime number %d \n", i);
            primeNumbers[position] = i;
            position ++;
            primeNumbersLength ++;
            printf("position is now : %d \n", position);
        }
        
    }
    
    printf("List of prime numbers < %d \n", n);
    printf("----------------------------");
    for (int i = 0; i < primeNumbersLength; i++) {
        printf("%d \n", primeNumbers[i]);
    }
}
