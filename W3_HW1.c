#include <stdio.h>
#include <stdlib.h>

int main() {
    int c , r;

    printf("Enter the number of chicken legs: \t");
    scanf("%d", &c);

    printf("Enter the number of rabbit legs: \t");
    scanf("%d", &r);

    int num_chicken = c / 2;

    int num_rabbit = r / 4;

    printf("The number of chickens in the cage is %d.\n", num_chicken);

    printf("The number of rabbits in the cage is %d.\n", num_rabbit);

    return 0;
}