#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter an integer in a decimal form: \t");
    scanf("%d", &n);

    printf("Hexadecimal value of decimal value \'%d\' is %X\n", n, n);

    printf("Octal value of decimal value \'%d\' is %o\n", n, n);

    return 0;
}