#include <stdio.h>
#include <stdlib.h>

enum menu {
    TEA, // 0
    COFFEE, // 1
    JUICE, // 2
    BEER // 3
};


int main(){
    enum menu mario = COFFEE;


    // The enum value is represented by an integer, so we can use the integer %d to print the integer
    printf("\n %d", mario);
}