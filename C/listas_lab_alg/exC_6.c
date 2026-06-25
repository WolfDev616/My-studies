#include <stdlib.h>
#include <stdio.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    int matrixA[n][m];
    int rows = n, columns = n;


    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &matrixA[i][j]);  
        }
    }
        
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (columns < n-1) {

                if (matrixA[i][j] < 0) {
                    printf("%d", matrixA[i][j]*(-1));
                    printf(" ");
                } else {
                    printf("%d", matrixA[i][j]);
                    printf(" ");
                }
                printf("\n");
            } else {
                if (matrixA[i][j] < 0) {
                    printf("%d", matrixA[i][j]*(-1));
                    printf(" ");
                } else {
                    printf("%d", matrixA[i][j]);
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}