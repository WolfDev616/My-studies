#include <stdlib.h>
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int matrixA[n][n];
    // int rows = n, columns = n;
    int sum=0;


    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &matrixA[i][j]);  
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i > j || i == j) {
                sum += matrixA[i][j];
            } 
        }
    }

    printf("%d\n", sum);

    return 0;
}