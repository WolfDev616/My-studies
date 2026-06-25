#include <stdlib.h>
#include <stdio.h>
#include "math.h"

int main() {
    int year;
    float carValue;
    
    scanf("%i %f", &year, &carValue);

    if (year <= 2010) {
        if (carValue < 25000.0) {
            printf("SIM\n");
        } 
        else if (25000.0 <= carValue < 40000.0) {
            printf("TALVEZ\n");
        }
        else if (carValue >= 40000.0) {
            printf("NAO\n");
        }
    }
    else if (2011 <= year <= 2015) {
        if (carValue < 30000.0) {
            printf("SIM\n");
        } 
        else if (30000.0 <= carValue < 50000.0) {
            printf("TALVEZ\n");
        }
        else if (carValue >= 50000.0) {
            printf("NAO\n");
        }
    }
    else if (2016 <= year <= 2020) {
        if (carValue < 40000.0) {
            printf("SIM\n");
        } 
        else if (40000.0 <= carValue < 70000.0) {
            printf("TALVEZ\n");
        }
        else if (carValue >= 70000.0) {
            printf("NAO\n");
        }
    }
    else if (year >= 2021) {
        if (carValue < 50000.0) {
            printf("SIM\n");
        } 
        else if (50000.0 <= carValue < 100000.0) {
            printf("TALVEZ\n");
        }
        else if (carValue >= 100000.0) {
            printf("NAO\n");
        }
    }

    return 0;
}