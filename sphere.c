#include <stdio.h>
#include <stdlib.h>

// ** calculate surface and volume of a sphere **

// prompt user to enter the radius
// calculate the surface area
// calculate the enclosed volume
// print the radius and the results in decimal format (2 digit of precision)
// print the radius and the results in scientific notation (3 digit of precision)

int main()
{
    float radius;
    float pi = 3.14;

    printf("Enter the radius: \n");
    scanf("%f", &radius);

    double area = 4 * pi * (radius * radius);
    double volume = (4.0 / 3) * pi * (radius * radius * radius);

    printf("results radius: %.2lf, volume: %.2lf, area: %.2lf\n", radius, volume, area);
    printf("results in scientific notation radius: %.3e, volume: %.3e, area: %.3e", radius, volume, area);

    return 0;
}