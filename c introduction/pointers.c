
#include <stdio.h>
#include <stdlib.h>


void addOne(int *p){
        *p = *p + 1;
}

int main() {
    int teste = 99;
    
    addOne(&teste);
    printf("%d", teste);
    
    return 0;
}