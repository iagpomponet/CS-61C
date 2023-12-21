#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter A operand (int): ");
    scanf("%f", &a);

    printf("Enter B operand (int): ");
    scanf("%f", &b);

    printf("\n");

    c = a + b;
    printf("Result of sum is %9.3f \n", c);

    c = a - b;
    printf("Result of subtraction is %9.3f \n", c);

    c = a * b;
    printf("Result of multiplication is %9.3f \n", c);

    c = a * b;
    printf("Result of division is %9.3f \n", c);
}