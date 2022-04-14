//
//  chapter3exercice.c
//  PlayingWithC
//
//  Created by Realife Tech on 12/10/2021.
//

#include "chapter3exercice.h"

void weekdayCalculator(void) {
    int firstAprilIndex = 3, fourMay;
    fourMay = (33 + firstAprilIndex)%7 ;
    printf("The 4th May is the is the %d day of the week (0 being monday) \n", fourMay);
}

void isOdd(void) {
    int userValue;
    printf("Please enter an integer value \n");
    scanf("%d,", &userValue);
    int isOdd = userValue%2;
    if (isOdd) {
        printf("Your number %d is odd \n", userValue);
    } else {
        printf("Your number %d is even \n", userValue);
    }
    
}

void showTen(void) {
    int x, ten, hundreds;
    puts("Enter a value");
    scanf("%d", &x);
    ten = (x / 10) % 10;
    printf("dizaine = %d \n", ten);
    hundreds = (x / 100) % 100;
    printf("centaine = %d \n", hundreds);
}

void roundNumber(void) {
    float x, roundedValue;
    puts("Enter a value");
    scanf("%f", &x);
    int temp = (int)((x + 0.005) * 100);
    roundedValue = temp / 100.0;
    printf("roundedValue = %.2f", roundedValue);
}

void findCirclePerimeterAndArea(void) {
    float radius, perimeter, area;
    printf("please enter the radius: \n");
    scanf("%f", &radius);
    perimeter = 2 * M_PI * radius;
    area = M_PI * pow(radius, 2);
    printf("The radius is: %.2f \n", radius);
    printf("The perimeter is: %.2f \n", perimeter);
    printf("The area is: %.2f \n", area);
}
