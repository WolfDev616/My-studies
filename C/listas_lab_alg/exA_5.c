#include <stdlib.h>
#include <stdio.h>

int main() {
    int a[10], sum;

    for (int i=0; i<10; i++) {
        scanf("%d", &a[i]);
    }
    
    sum = a[0] + a[1] + a[8];
    
    printf("%d\n", sum);
    
    
    for (int i=0; i<10; i++) {
        if (a[i]%2!=0) {
            a[i] = 0;
        }
    }
    
    for (int i=0; i<10; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}
