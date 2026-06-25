#include <stdlib.h>
#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    float v[t];
    
    for(int i=0; i<t; i++){
        scanf("%f", &v[i]);
    }
    
    
    //Trecho que eliminaNegativos
    
    for(int i=0; i<t; i++) {
        if (((2 * v[i]) - 10) < 0) {
            v[i] = 0;
        }
    }
    
    for (int i=0; i<t; i++) {
        printf("%.2f\n", v[i]);
    }
    return 0;
}