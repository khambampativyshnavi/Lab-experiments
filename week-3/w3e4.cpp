#include <stdio.h>

int main() {
    float u, a, t, distance;
    printf("Enter the initial velocity: ");
    scanf("%f", &u);

    printf("Enter the acceleration: ");
    scanf("%f", &a);

    printf("Enter the time in seconds: ");
    scanf("%f", &t);
    distance = (u * t) + (0.5 * a * t * t);
    printf("\nThe total distance traveled by the object is: %.2f meters\n", distance);
}
