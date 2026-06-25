#include <stdlib.h>
#include <stdio.h>

int maior (int *x, int *y) {

    if (*x > *y) {
        return *x;
    } else {
        return *y;
    }
}



int main() {
    
    int x, y;
    scanf("%d %d", &x, &y);
    int *r;
    *r = maior(&x, &y);
    printf("%d\n", *r);
    return 0;
}