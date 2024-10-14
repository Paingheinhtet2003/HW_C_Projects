#include <stdio.h>
#include <stdlib.h>

int main() {
    int year, zodiac;

    printf("Enter the year: \t");
    scanf("%d", &year);

    zodiac = (year - 1900) % 12;

    if (zodiac < 0) {
        zodiac += 12;
    }
    
    switch (zodiac) {
        case 0: 
            printf("The zodiac sign for %d year is \'Rat\'.\n", year);
            break;
        case 1:
            printf("The zodiac sign for %d year is \'Ox\'.\n", year);
            break;
        case 2:
            printf("The zodiac sign for %d year is \'Tiger\'.\n", year);
            break;
        case 3:
            printf("The zodiac sign for %d year is \'Rabbit\'.\n", year);
            break;
        case 4:
            printf("The zodiac sign for %d year is \'Dragon\'.\n", year);
            break;
        case 5:
            printf("The zodiac sign for %d year is \'Snake\'.\n", year);
            break;
        case 6:
            printf("The zodiac sign for %d year is \'Horse\'.\n", year);
            break;
        case 7:
            printf("The zodiac sign for %d year is \'Goat\'.\n", year);
            break;
        case 8: 
            printf("The zodiac sign for %d year is \'Monkey\'.\n", year);
            break;
        case 9:
            printf("The zodiac sign for %d year is \'Rooster\'.\n", year);
            break;
        case 10:
            printf("The zodiac sign for %d year is \'Dog\'.\n", year);
            break;
        case 11:
            printf("The zodiac sign for %d year is \'Pig\'.\n", year);
            break;
        default:
            printf("Error: Invalid year.\n");

    }

    return 0;
}