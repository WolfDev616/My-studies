#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;
    
    
    scanf("%d", &n1);
    int v1[n1];

    // … Ler primeiro vetor …
    for (int i=0; i<n1; i++) {
        scanf("%d", &v1[i]);
    }
    
    
    scanf("%d", &n2);
    int v2[n2];
    
    
    // … Ler segundo vetor …
    for (int i=0; i<n2; i++) {
        scanf("%d", &v2[i]);
    }
    
    
    n3 = n1 + n2;
    int vf[n3];


    // … Trecho que junta dois vetores …
    for (int i=0; i<=n2; i++) {
        vf[i] = v2[i];
    }

    for (int j=0; j<=n1; j++) {
        vf[n2 + j] = v1[(n1-1)-j];
    }


    printf("%d\n", n3);


    for(int i=0; i <n3; i++){
        printf("%d ", vf[i]);
    }

    printf("\n");
    
    return 0;
}