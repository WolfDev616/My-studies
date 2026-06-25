#include <stdlib.h>
#include <stdio.h>

void binary(int n) {

    if (n == 0) {
        return;
    }

    binary(n/2);

    printf("%d", n % 2);

}

int main() {

    int n;
    printf("Insert a number:\n");
    scanf("%d", &n);

    binary(n);

    printf("\n");

    return 0;

}