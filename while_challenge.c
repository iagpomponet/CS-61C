// minimum power of 2;
#include <stdio.h>

int main()
{
    int input, pow = 2;

    printf("Enter a value: \n");
    scanf("%d", &input);

    while (input > pow)
    {
        pow = pow * pow;
    }

    printf("the min power of 2 is: %d", pow);
}