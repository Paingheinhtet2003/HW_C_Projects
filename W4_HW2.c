#include <stdio.h>
#include <stdlib.h>

int main() {
    double waist, weight;

    printf("Enter your waist circumference: \t");
    scanf("%lf", &waist);

    printf("Enter your weight: \t");
    scanf("%lf", &weight);

    double fat_percentage = ((waist * 0.74 - weight * 0.082 - 44.74) / weight) * 100;

    printf("Fat Percentage: %.2f%%.\n", fat_percentage);

    if (waist >= 0 && weight >= 0)
    {
        if (fat_percentage < 11)
        {
            printf("It is less than standard.\n");
        } else if (fat_percentage >= 12 && fat_percentage < 23) {
            printf("It is standard.\n");
        } else if (fat_percentage >= 23 && fat_percentage < 28) {
            printf("It is above standard.\n");
        }else if (fat_percentage >= 28){
            printf("It is obesity.\n");
        }
    }
     return 0;   
}