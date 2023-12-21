#include <stdio.h>

int main()
{
    int variable = 0;

    printf("%llu \n", sizeof(int));

    // should print 4 bytes (32 bits) in both cases
    printf("%llu", sizeof(variable));
}