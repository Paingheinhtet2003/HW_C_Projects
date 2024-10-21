#include <stdio.h>
#include <stdlib.h>

int main() {
    int h, m; /* Declaring the variable */
    float h_angle, m_angle, angle; /* variable for computing the angles */

    /* Accepting user inputs for hour and minute */
    do {
        printf("Enter the hour (1 to 12): \t");
        scanf("%d", &h);

        printf("Enter the minute (00 to 59): \t");
        scanf("%d", &m);
    } while (h <= 1 && m <= 00);
    
    h_angle = (h % 12) * 30 + (m * 0.5); /* Computing the hour angle */

    m_angle = m * 6; /* Computing the minute angle */

    angle = h_angle - m_angle; /* Calculating the absolute difference between hour and minute angle */

    /* In case the angle is negative */
    if (angle < 0) {
        float temp = 0;
        for (float i = angle; i < 0; i++) {
            temp++;
        }
        angle = temp;
    }

    /* Ensuring the smallest angle */
    if (angle > 180) {
        angle = 360 - angle;
    }

    printf("The angle at %02d:%02d is %.2f degree.\n", h, m, angle); /* Displaying the result */

    return 0;
}