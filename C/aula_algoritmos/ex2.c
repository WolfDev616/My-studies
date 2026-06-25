#include <stdlib.h>
#include <stdio.h>

int main() {
    // Get numbers of length and width, declare area and perimeter;

    float terrainLength;
    float terrainWidth;
    float area;
    float perimeter;
    float fenceCost = 25.00;

    printf("Insert terrain length: \n");
    scanf("%f", &terrainLength);
    printf("Insert terrain width: \n");
    scanf("%f", &terrainWidth);

    // Multiply to get terrain area
    area = terrainLength * terrainWidth;
    printf("The area of the terrain is %.02f m²\n", area);

    // Calculate the total cost based on fence costs

    perimeter = (2 * terrainLength) + (2* terrainWidth);
    float totalFenceCost = fenceCost * perimeter;

    printf("The total cost considering the perimeter of %.02f m is $%.02f \n", perimeter, totalFenceCost);
 
    return 0;

}
 
