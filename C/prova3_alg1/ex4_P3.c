#include <stdio.h>
#include <stdlib.h>


int main() {


    // Creating matrixes
    int **firstM = malloc(10 * sizeof(int *));
    int **secondM = malloc(10 * sizeof(int *));
    int **thirdM = malloc(10 * sizeof(int *));

    for (int i=0;i<10;i++){
       firstM[i] = malloc(10 * sizeof(int));
    }
    
    for (int i=0;i<10;i++){
       secondM[i] = malloc(10 * sizeof(int));
    }

    for (int i=0;i<10;i++){
       thirdM[i] = malloc(10 * sizeof(int));
    }
    // Reading matrixes 

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            scanf("%d", &firstM[i][j]);
            getchar();
        }
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            scanf("%d", &secondM[i][j]);
            getchar();
        }
    }

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            thirdM[i][j] = firstM[i][j] + secondM[i][j];
            printf("%d ", thirdM[i][j]);
        }
        printf("\n");
    }

    

    // Freeing matrixes
    for (int i=0;i<10;i++){
       free(firstM[i]);
       free(secondM[i]);
       free(thirdM[i]);
    }

    free(firstM);
    free(secondM);
    free(thirdM);

    

    // for (int i=0, i<)


    return 0;
}
