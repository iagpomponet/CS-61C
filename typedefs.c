#include <stdio.h>

typedef enum {
    COFFEE,
    JUICE, 
    TEA
} Menu;

int main() {
    Menu mario = JUICE;
    Menu olivia = COFFEE;

    printf("Mario's order is %d", mario);
    printf("\nOlivia's order is %d", olivia);
}