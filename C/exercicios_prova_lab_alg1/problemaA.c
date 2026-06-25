#include <stdlib.h>
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%i %i %i %i", &a, &b, &c, &d);
    
    if (a > b && a > c && a > d) {
        printf("%i\n", a);
    }
    if (b > a && b > c && b > d) {
        printf("%i\n", b);
    }
    if (c > b && c > a && c > d) {
        printf("%i\n", c);
    }
    if (d > a && d > b && d > c) {
        printf("%i\n", d);
    }
    
    return 0;
}
