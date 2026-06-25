/* A regra de existência do triângulo determina que a medida de qualquer um dos lados deve ser menor que a soma das medidas dos outros dois lados (e maior que o valor absoluto da diferença entre eles). Em resumo: a soma dos dois lados menores precisa ser obrigatoriamente maior que o lado maior*/

#include <stdlib.h>
#include <stdio.h>
#include "math.h"

int main() {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c && fabs(a - b) < c) || (b + c > a && fabs(c - b) < a) || (a + c > b && fabs(a - c) < b )) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}