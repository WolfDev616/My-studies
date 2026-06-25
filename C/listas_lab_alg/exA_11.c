#include <stdlib.h>
#include <stdio.h>


void triplo(int *x) {
    
    int aux, a, b;
    a = *x;
    aux = 3 * a;
    
    b = aux;
    *x = b;

}


int main(){
    
    int x;
    scanf("%d", &x);
    triplo(&x);
    printf("%d\n", x);

    return 0;
}