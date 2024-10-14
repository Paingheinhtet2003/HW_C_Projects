#include <stdio.h>
#include <stdlib.h>

int main() {
    int res;
    int ans = 0;

    printf("\nEnter \'1\' for \'Yes\' and \'0\' for \'No\'.\n");
    printf("*************************************\n");

    printf("\nIs your number in the set {1, 3, 5, 7}?: \t");
    scanf("%d", &res);
    ans += (res == 1)? 1 : 0;

    printf("Is your number in the set {2, 3, 6, 7}?: \t");
    scanf("%d", &res);
    ans += (res == 1)? 2 : 0;

    printf("Is your number in the set {4, 5, 6, 7}?: \t");
    scanf("%d", &res);
    ans += (res == 1)? 4 : 0;

    printf("The number you guess is: %d.\n", ans);

    return 0;

}