#include <stdlib.h>
#include <stdio.h>

int main() {

    int friendship_matrix[10][10];
    int rows = 10, columns = 10;
    int personA, personB;

    scanf("%d %d", &personA, &personB);

    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            scanf("%d", &friendship_matrix[i][j]);  
        }
    }
    
    
    for (int j=0; j<10; j++) {
        if (friendship_matrix[personA][j] == 1 && friendship_matrix[personB][j] == 1) {
            printf("%d ", j);
        }
    }

    return 0;
}





// percorrer cada linha pra analisar por pessoa
// percorrer cada coluna pra verificar os amigos
// comprarar linha a linha. 
