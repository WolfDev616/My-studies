#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int sum = 0;

    printf("Type here two numbers a and b: \n");
    scanf("%i %i", &a, &b);

    if (a >= b) {
        printf("Invalid numbers. \n");
    } else {
        for (int i = a; i <= b; i++) {
            if (i % 2 ==1) {
                sum+=i;
            }
        } printf("Total sum is %d \n", sum);
    } 

    return 0;
}