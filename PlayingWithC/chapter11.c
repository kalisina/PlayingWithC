#include "chapter11.h"

void simplePointers(void) {
    printf("hello simplePointers\n");
    int x = 2;
    int *p = &x;
    printf("x = %d \n", x);
    printf("p = %p \n", &x);
    *p = 3;
    printf("x = %d \n", x); // will print 3
    printf("size of x = %lu \n", sizeof(x));
    printf("size of p = %lu \n", sizeof(p));

    int y = 5;
    printf("y = %d\n", y); // will print 5
    modify(&y);
    printf("after modify, y = %d\n", y); // will print 6
}

void modify(int *p) {
    *p = *p + 1;
}