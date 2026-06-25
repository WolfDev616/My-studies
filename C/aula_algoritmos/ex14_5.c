#include <stdlib.h>
#include <stdio.h>

int main() {
    
    int vector1[10];
    int i, j, valor = 0;
    for (i=0;i<10;i++) {
        scanf("%i", &vector1[i]);
        // printf("%i", vector1[i]);
    }

    for (i=0;i<10;i++) {
        valor = vector1[i];

        for (j=i +1;j<10;j++) {
            if (i == j) {
                continue;
            }
            if (vector1[j] == valor) {
                printf("O valor %i se repete.\n", vector1[i]);
            }
        }
        
    }    
    return 0;
}


//1. Ler o array
//2. Comparar se algum número repete
//  2.1. Percorrer o array
//  2.2. Comparar com outros números do array
//3. Printar números