//
//  chapter7exercice.h
//  PlayingWithC
//
//  Created by RealifeTech on 06/12/2021.
//

#ifndef chapter7exercice_h
#define chapter7exercice_h

#include <stdio.h>

// exe 7.1
typedef struct rationalNumber {
    int numerator, denominator;
} RationalNumber;

void rationalNumberMaker(void);
RationalNumber createRationalNumber(void);
void showRationalNumber(RationalNumber rn);
RationalNumber addTwoRationalNumbers(RationalNumber rn1, RationalNumber rn2);
RationalNumber multiplyTwoRationalNumbers(RationalNumber rn1, RationalNumber rn2);

// exe 7.2
typedef enum woodType {
    Pine, Oak, Beech
} woodType;

typedef struct panel {
    int width, height, depth;
    woodType wt;
} Panel;

void panelMaker(void);
Panel createPanel(void);
void displayPanel(Panel);
int calculatePanelVolume (Panel);

// exe 7.3

typedef struct Product {
    char type;
    unsigned int ref, quantity;
    float price;
} Product;

void productMaker(void);
void displayProduct(Product p);
Product createProduct(void);

#endif /* chapter7exercice_h */
