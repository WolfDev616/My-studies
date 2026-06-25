#include <stdlib.h>
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);
    
    if (b == a + 1 && c == b + 1) {
        printf("SIM\n");
    } else {
        printf("NÃO\n");
    }
    return 0;
}