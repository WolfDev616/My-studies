#include <stdlib.h>
#include <stdio.h>

int eh_primo(int x){

    int num_divisores = 0;

    for(int i=1; i<=x; i++){
        if(x%i == 0){
            num_divisores++;
        }
    }

    if(num_divisores == 2){
        return 1;
    }
    return 0;
}


int main(){
    int x;
    scanf("%d", &x);

    for (int i=1; i<=x; ++i) {
        if (x%i==0) {
            if (eh_primo(i)==1) {
                printf("%d\n", i);
            }
        }
    }
    

    return 0;
}