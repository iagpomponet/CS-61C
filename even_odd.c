#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int input;
    bool isEven = (input % 2 == 0) ? true : false;

    printf("This program check if the number is even or odd, please enter a number: \n");
    scanf("%d", &input);

    if (input < 0)
    {
        printf("Warning: %d is negative \n", input);
        return EXIT_FAILURE;
    }
    else if (isEven)
    {
        printf("The number you typed is even");
    }
    else
    {
        printf("The number you typed is odd");
    }
}