#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159265358979323846

int main() {
    // Read Info
    float radius, height, volume;
    printf("Insert radius and height of the water tank: \n");
    scanf("%f %f", &radius, &height);

    // Calculating
    volume = (PI * (radius * radius)) * height;

    printf("The volume is %.2f m³. \n", volume);

    return 0;
}