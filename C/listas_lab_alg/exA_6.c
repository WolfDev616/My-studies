#include <stdlib.h>
#include <stdio.h>

int main() {

    int matrixA[10][10];
    int rows = 10;
    int columns = 10;
    int odds = 0;

    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            scanf("%d", &matrixA[i][j]);     
        }
    }
        
        
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            printf("%d", matrixA[i][j]);

            if (j < columns-1) {
                printf(" ");
            }
        }
        printf("\n");
    }

      for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (matrixA[i][j]%2!=0) {
                odds++;
            }

    
        }
    }

    printf("There are %d odd numbers.\n", odds);
    return 0;
}