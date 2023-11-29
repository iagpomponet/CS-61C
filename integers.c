// I can run this directly with &{gcc integers.c; ./a.exe}

#include <stdio.h>
#include <stdlib.h>
// This header file gives us access of exact size interger types
#include <stdint.h>

int main(){
    unsigned students = 25;
    unsigned long long worldPopulation = 78000000090;

    printf("%12u | Students in the class \n", students);
    printf("%12u | World population now \n", worldPopulation);

    // UINT8_MAX is a macro with the highest value possible inside a 8bit unsigned int
    uint8_t count = UINT8_MAX;

    // We can force an overflow by adding 1 to the max value that this data type can hold, so it will return 0
    count = count + 1;

    printf("%12u  | OVERFLOW", count);

    // More examples
    printf("%12u  | UINT32 MAX \n", UINT32_MAX);
    printf("%12u  | INT32 MIN \n", INT32_MIN);
    printf("%12u  | INT32 MAX \n", INT32_MAX);

    // hexadecimal

    int hexaDecimalNumber = 0xFF;

    printf("hexadecimal %x \n", hexaDecimalNumber);\

    // What happens if i try to print it with the int identifier?
    printf("hexadecimal %d \n", hexaDecimalNumber);

    

    return EXIT_SUCCESS;
}