#include <stdio.h>

// data: 0xABCD

int main()
{
    unsigned data = 0xABCD;

    unsigned N = 0;
    unsigned M = 3;
    // W => Range of bits from N to M
    unsigned W = M - N + 1;
    // mask => 2^W - 1;
    // 2 ^ W = 1 << W

    unsigned mask = (1 << W) - 1;

    // We need to shift data to right N times to the range we selected match the Wbits position of our mask
    unsigned result = (data >> N) & mask;

    printf("0x%04x", result);

    return 0;
}