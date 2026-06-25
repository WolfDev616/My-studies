#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void minuscula(char *l) { // Parâmetro: endereço
     
    
    if (*l >= 65 && *l <= 90) { // Desferenciar para ler o valor
        *l = *l + 32; // Desreferenciar para escrever o valor
    }
    
}

int main(){

    char l;
    
    do{
        scanf("%c", &l);
        if(l == '\n'){
            break;
        }

        minuscula(&l); // Precisa passar o endereço da variável
        printf("%c", l);
    } while(1);
        printf("\n");
        return 0;
}