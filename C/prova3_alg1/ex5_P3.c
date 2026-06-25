#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    // Open file
    FILE* my_file = fopen("cities_input.txt", "r");
    FILE* out_file = fopen("cities.output.txt", "w");
    
    // Variables to separate information
    char content[1000];
    char city[25];
    char biggestCity[25];
    int population = 0;
    int biggestPopulation = 0;

    // Safety control for opening file
    if (my_file == NULL) {
        printf("Error!\n");
        return 1;
    }


    // Read all the lines and separate in the variables
    while (fgets(content, sizeof(content), my_file) != NULL) {
        // printf("%s\n", content);
        sscanf(content, "%[^ ] %d", city, &population);
    
        // Check and compare to attribute biggest population and the correspondent city
        if (population > biggestPopulation) {
            biggestPopulation = population;
            strcpy(biggestCity, city);
        }
    }

    

    // fwrite (city, 25, 1, out_file);
    // fwrite (&population, sizeof(int), 1, out_file);

    fprintf(out_file, "The biggest city is %s with ", biggestCity);
    fprintf(out_file, "%d people.\n", biggestPopulation);


    fclose(my_file);
    
    return 0;
    }
