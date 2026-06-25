#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float sum, media;
    scanf("%d", &n);
    float v[n];
    
    
    // ... Ler vetor …
    for (int i=0; i<n; i++) {
        scanf("%f", &v[i]);
    }
    // ... Trecho que calcula a média …
    for (int i=0; i<n; i++) {
        sum += v[i];
    }
    // ... SEU CÓDIGO AQUI …
    media = sum/n;
    
    printf("%.2lf\n", media);
    return 0;
}