//
//  chapter7exercice.c
//  PlayingWithC
//
//  Created by RealifeTech on 06/12/2021.
//

#include "chapter7exercice.h"

// exe 7.1
void rationalNumberMaker(void) {
    // 1 - ask for user input
    //RationalNumber rn = createRationalNumber();
    //showRationalNumber(rn);
    
    // add 2 numbers
    RationalNumber r1 = createRationalNumber();
    RationalNumber r2 = createRationalNumber();
    
    RationalNumber addedRn = addTwoRationalNumbers(r1, r2);
    RationalNumber multipliedRn = multiplyTwoRationalNumbers(r1, r2);
    showRationalNumber(addedRn);
    showRationalNumber(multipliedRn);
}

RationalNumber createRationalNumber(void) {
    RationalNumber rn;
    puts("Please enter a numerator and denominator for your rational number");
    scanf("%d %d", &rn.numerator, &rn.denominator);
    printf("numerator = %d - denominator = %d \n", rn.numerator, rn.denominator);
    return rn;;
}

void showRationalNumber(RationalNumber rn) {
    printf("Rational Number is %d / %d \n", rn.numerator, rn.denominator);
}

RationalNumber addTwoRationalNumbers(RationalNumber rn1, RationalNumber rn2) {
    RationalNumber result;
    result.numerator = rn1.numerator * rn2.denominator + rn2.numerator * rn1.denominator;
    result.denominator = rn1.denominator * rn2.denominator;
    return result;
}

RationalNumber multiplyTwoRationalNumbers(RationalNumber rn1, RationalNumber rn2) {
    RationalNumber result;
    result.numerator = rn1.numerator * rn2.numerator;
    result.denominator = rn1.denominator * rn2.denominator;
    return result;
}


// exe 7.2

void panelMaker(void) {
    Panel p = createPanel();
    displayPanel(p);
    printf("volume of panel is %d \n", calculatePanelVolume(p));
}

Panel createPanel(void) {
    Panel p;
    puts("Enter width, height and depth of the panel");
    scanf("%d %d %d", &p.width, &p.height, &p.depth);
    puts("Enter the wood type: 0 for pine, 1 for oak or 2 for beech");
    scanf("%d", &p.wt);
    return p;
}

void displayPanel(Panel p) {
    printf("width = %d \n", p.width);
    printf("height = %d \n", p.height);
    printf("depth = %d \n", p.depth);
    printf("woodType = %d \n", p.wt);
}

int calculatePanelVolume (Panel p) {
    return p.width * p.height * p.depth;
}


// exo 7.3

void productMaker(void) {
    Product p = createProduct();
    displayProduct(p);
}

void displayProduct(Product product) {
    
    switch (product.type) {
        case '0':
            puts("Motherboard");
            break;
        case '1':
            puts("Processor");
            break;
        case '2':
            puts("RAM");
            break;
        case '3':
            puts("graphic card");
            break;
        default:
            puts("this is default");
            break;
    }

    printf("Product ref is %d \n", product.ref);
    printf("Product quantity is %d \n", product.quantity);
    printf("Product price is %f \n", product.price);
    printf("Total price is %f \n", product.price * product.quantity);
}

Product createProduct(void) {
    Product product;
    puts("What is the product type?");
    scanf("%c", &product.type);
    
    puts("What is the product ref?");
    scanf("%d", &product.ref);
    
    puts("What is the product quantity?");
    scanf("%d", &product.quantity);
    
    puts("What is the product price?");
    scanf("%f", &product.price);
    
    return product;
}
