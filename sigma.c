#include <stdio.h>

int main()
{
    int base = 10;
    int tip = 5;

    for (int i = 0; i <= base; i++)
    {
        printf("x");
    }

    for (int i = 0; i < tip; i++)
    {
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
        printf("x \n");
    }

    for (int i = tip - 1; i >= 0; i--)
    {
        for (int s = 0; s <= i; s++)
        {
            printf(" ");
        }
        printf("x \n");
    }

    for (int i = 0; i <= base; i++)
    {
        printf("x");
    }
}