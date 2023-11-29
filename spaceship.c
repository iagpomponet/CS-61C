#include <stdio.h>
#include <stdlib.h>

typedef enum {
    NONE = 0,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20
} Levels;

int main(){
    Levels thrust = NONE;
    printf("Ready to go level -- thrust: %d", thrust);

    thrust = MAXIMUM;
    printf("\nTake off go level -- thrust: %d", thrust);

    thrust = MEDIUM;
    printf("\nEntering the ionosphere -- thrust: %d", thrust);

    
    thrust = LOW;
    printf("\nTravelling to deep space -- thrust: %d", thrust);

    return EXIT_SUCCESS;
}