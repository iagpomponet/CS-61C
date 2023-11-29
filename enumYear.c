#include <stdio.h>

enum months {
    JAN = 1,
    FEV,
    MAR, 
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT, 
    NOV, 
    DEC
};

int main(){
    enum months firstMonth = JAN;
    enum months lastMonth = DEC;

    printf("The first month is %d", firstMonth);
    printf("\nThe last month is %d", lastMonth);
};