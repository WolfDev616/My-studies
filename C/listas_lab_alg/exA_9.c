#include <stdlib.h>
#include <stdio.h>

int soma(int x, int y) {
    int soma = x + y;

    return soma;
}


int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    int resultado = soma(x,y);
    printf("%d\n", resultado);

    return 0;
}