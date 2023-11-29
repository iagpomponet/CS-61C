#include <stdio.h>
#include <stdlib.h>

int main(){
    const int moonLanding = 1969;
    const int speedOfLight = 299792458.;
    const double pi = 3.142;
    const unsigned hexaDead = 0xDEADU;
    const unsigned hexaSecret = 51966U;

    printf("integer, 10 chars width, padded with spaces %010d \n", moonLanding);

    printf("floating point with no decimal digits %.0f \n %.3e \n", speedOfLight, speedOfLight);

    return EXIT_SUCCESS;
};