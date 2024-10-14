#include <stdio.h>
#include <stdlib.h>

int main() {
    int sec, hours, minutes, seconds;

    printf("Enter the number of seconds: \t");
    scanf("%d", &sec);

    hours = sec / 3600;
    seconds = sec % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("The Time is %d hours, %d minutes and %d seconds.\n", hours, minutes, seconds);

    printf("X = %d; Y = %d; Z =%d\n", hours, minutes, seconds);

    return 0;
}