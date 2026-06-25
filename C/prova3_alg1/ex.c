#include <stdio.h>
#include <stdlib.h>

int sum_numbers(int *vec, int count) {
    if (count < 5) {
        return vec[count] + sum_numbers(vec, count + 1);
    } else {
        return 0;
    }
}

int main() {
    int count = 0;  // começa em 0
    int vec[5] = {2, 3, 4, 5, 6};
    int sum = sum_numbers(vec, count);
    printf("%d\n", sum);
    return 0;
}