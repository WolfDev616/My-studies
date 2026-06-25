// Escreva um programa que recebe do usuário uma string S, um caractere C, e uma posição I e
// devolve o índice da primeira posição da string onde foi encontrado o caractere C. A procura deve
// começar a partir da posição I.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char stringA[40];
    char c;
    int posI;
    int posC;

    fgets(stringA, 40, stdin);
    scanf("%c", &c);
    scanf("%d", &posI);


    for (int i = posI; i<strlen(stringA); i++) {
        if (stringA[i] == c) {
            posC = i;
        }
    }
    printf("%d\n", posC);
    printf("%d\n", posC-posI);
    

    return 0;
}