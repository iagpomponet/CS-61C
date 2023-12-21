#include <stdio.h>

int main()
{
    int upper_limit, lower_limit, first_prime = 0;
    const int MAX = 1000;

    printf("Enter a upper limit: ");
    scanf("%d", &upper_limit);
    printf("Enter a lower limit: ");
    scanf("%d", &lower_limit);

    if (upper_limit < 2 || upper_limit > MAX)
    {
        goto cleanup;
    }

    for (int i = 2; i <= upper_limit; i++)
    {
        int isPrime = 1;
        for (int y = 2; y < i; y++)
        {
            if (i % y == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            if (!first_prime && i > lower_limit)
            {
                first_prime = i;
            }
            printf("i: %d\n", i);
        }
    }

    printf("first prime above lower limit %d \n", first_prime);

cleanup:
    printf("cleanup");
}