#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Fatorial só pega o valor de x, não precisa alterar nada usando ponteiros
int factorial(int x) {

    printf ("Function factorial in\n");

    if (x>=1) { 
        return x * factorial(x-1);
    } else {
        return 1;
    }
}

// Usa função void porque vai alterar os valores por endereço
void change_values(int *x, int *y) {
    
    printf ("Function change_values in\n");

    // X value
    *x = factorial(*x);

    // Y value
    *y = pow(*x,*y);
}


int main() {

    int x = 3,y = 3;

    printf("%d %d\n", x, y);
    
    change_values(&x, &y);
    
    printf("%d %d\n", x, y);

    return 0;
}