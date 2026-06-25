#include <stdlib.h>
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int matrixA[n][n];
    int rows = n, columns = n;


    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &matrixA[i][j]);  
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            printf("%d", matrixA[j][i]);
            if (j < columns - 1) {
                printf(" ");
            }     
        }
        printf("\n");
    }
}