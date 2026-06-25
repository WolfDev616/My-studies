#include <stdio.h>
#include <stdlib.h>

int sum_numbers(int *vec, int count) {


    printf("Function in %d times\n", count+1);
    int sum = 0;
    
    
    if (count < 5) {
        sum = vec[count] + sum_numbers(vec, count +1);
        return sum; 
    } else {
        return sum;
    }

}


int main() {

    int count = 0;
    int sum;
    int vec[5] = {2, 3, 4, 5, 6};

    sum = sum_numbers(vec, count);

    printf("%d\n", sum);

    return 0;
}