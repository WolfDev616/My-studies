#include <stdlib.h>
#include <stdio.h>

int print_mark(int n) {

    if (n == 0) {
        return 1;
    }
        for (int i=0; i<n; ++i) {
            printf("!");
        }
        printf("\n");
        
        
     
    return print_mark(n - 1);

}


int main() {

    int n;
    printf("Insert a number:\n");
    scanf("%d", &n);

    print_mark(n);

    return 0;

}