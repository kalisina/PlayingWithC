//
//  chapter2exercice.c
//  PlayingWithC
//
//  Created by Realife Tech on 11/10/2021.
//

#include "chapter2exercice.h"


void convertFahrenheitToCelsius(void){
    float fahrenheit, celsius;
    printf("Please enter a Fahrenheit degree \n");
    scanf("%f", &fahrenheit);
    celsius = 0.55556 * (fahrenheit - 32.0);
    printf("%f fahrenheit = %f celcius \n", fahrenheit, celsius);
}

void convertCelciusToFahrenheit(void){
    float celsius, fahrenheit;
    printf("Please enter a celcius degree \n");
    scanf("%f", &celsius);
    fahrenheit = (celsius / 0.55556) + 32.0;
    printf("%f celsius = %f fahrenheit", celsius, fahrenheit);
}

void tenPercentDiscount(void) {
    float initialPrice, priceAfterDiscount;
    float discount = 0.10;
    printf("What is the initial price of the product? \n");
    scanf("%f", &initialPrice);
    printf("we are applying a discount of %.0f%% \n", discount * 100);
    priceAfterDiscount = initialPrice - (initialPrice * discount);
    printf("the new price is : %.2f euros \n", priceAfterDiscount);
}

void freeFall(void) {
    float t;
    //float g = 9.81;
    printf("Please enter time in second : \n");
    scanf("%f", &t);
    float h = 0.5 * G * (t * t);
    printf("the ball has fallen from %.2f meters in %.0f seconds \n", h, t);
}

void freeFallHeight(void) {
    float h;
    //float g = 9.81;
    printf("Please enter the Height in meters : \n");
    scanf("%f", &h);
    float t = sqrt(h * 2 / G);
    printf("It will take %.0f seconds for the ball to fall from %.0f meters \n", t, h);
}
