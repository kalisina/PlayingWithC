//
//  main.c
//  PlayingWithC
//
//  Created by Realife Tech on 11/10/2021.
//

#include <stdio.h>
#include "chapter2.h"
#include "chapter2exercice.h"
#include "chapter3exercice.h"
#include "chapter4.h"
#include "chapter4exercice.h"
#include "chapter5exercice.h"
#include "chapter7exercice.h"
#include "chapter9exercice.h"
#include "pointers.h"

void switchNumbers(int a, int b) {
    puts("switchNumbers");

    printf("BEFORE a = %d - addr = %p \n", a, &a);
    printf("BEFORE b = %d - addr = %p \n", b, &b);
    puts("------------------------------------------");
    a = a * a;
    b = b * b;
    printf("AFTER a = %d - addr = %p \n", a, &a);
    printf("AFTER b = %d - addr = %p \n", b, &b);
}

int main(int argc, const char * argv[]) {
    
    //printf("Hello, World!\n");
    
    //printUserValue(); //lesson 2.3
    //doubleTheUserValue(); //lesson 2.4
    
    // exe 2.1
    //convertFahrenheitToCelsius();
    //convertCelciusToFahrenheit();
    //tenPercentDiscount(); // exe 2.2
    
    // exe 2.4
    //freeFall();
    //freeFallHeight();
    
    //weekdayCalculator(); // exe 3.1
    //isOdd(); // exe 3.2
    //showTen(); // exe 3.3
    //roundNumber(); // exe 3.4
    //findCirclePerimeterAndArea(); // exe 3.5
    
    //displayText(); // lesson 4
    //displayAsciiCode(); // exe 4.1
    //toRename();
    //divideNumbers(); // exe 4.2
    
    //ascendingNumbers(); // exe 5.1
    
    //rationalNumberMaker(); // exe 7.1
    //panelMaker(); // exe 7.2
    //productMaker(); // exe 7.3
    
    hello(); // exe 9
    
    //testingPointers();
    return 0;
}
