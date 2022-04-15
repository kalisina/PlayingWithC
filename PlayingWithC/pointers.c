//
//  pointers.c
//  PlayingWithC
//
//  Created by RealifeTech on 15/12/2021.
//

#include "pointers.h"

void testingPointers(void) {
    
    /*
     Pointer: variable containing the address of another variable
     
     %x -> display address of a variable
     
     [Variables]
        myVar: value of the variable
        &myVar: address of the variable
    
     [Pointers]
        myPointer: address of the pointed variable
        *myPointer: value of the pointed variable
        &myPointer: address of the pointer
     
        Init:
        *myPointer = NULL or *myPointer = &myVariable
    */
    
    /*
    printf("value of x = %d \n", x);
    printf("address of x = %d \n", &x);
    
    printf("value of xPointer = %d \n", xPointer);
    printf("value of the pointed variable by xPointer = %d \n", *xPointer);
    printf("addres of xPointer = %d \n", &xPointer);
    */
    
    puts("testingPointers()");
    unsigned int myVar = 5;
    unsigned int* addressOfMyVar = &myVar;
    printf("value of myVar = %d \n", myVar);
    printf("address of myVar = %x \n", &myVar);
    printf("addressOfMyVar = %x \n", addressOfMyVar);
    puts("");
    
    int numberA = 4;
    int numberB = 17;
    
    int* numberAPointer = &numberA;
    int* numberBPointer = &numberB;
    printf("numberA = %d and numberB = %d \n", numberA, numberB);
    inverseNumbers(numberAPointer, numberBPointer);
    printf("New value of numberA = %d and numberB = %d \n", numberA, numberB);
}

void inverseNumbers(int* numberA,int* numberB) {
    int temp = *numberA;
    *numberA = *numberB;
    *numberB = temp;
}
