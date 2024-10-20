#include <stdio.h>

int main() {
    int num;
    double pi = 0.0;
    int sign = 1;

    printf("Enter an integer i term to approximate pi: \t");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        pi += sign * (4.0 / (2 * i + 1));
        sign = -sign;
    }

    printf("Approximation of pi using integer %d term is %.15f.\n",num, pi);

    return 0;
}