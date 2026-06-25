#include <stdlib.h>
#include <stdio.h>

int main() {
    float loanValue;
    float income;
    int clientAge;

    scanf("%i %f %f", &clientAge, &income, &loanValue);

    if (clientAge >= 18) {
        if (income < 2500) {
            if (loanValue <= 15000) {
                printf("Empréstimo concedido!\n");
            }
            else {
                printf("Empréstimo não concedido!\n");
            }
        } else {
                printf("Empréstimo concedido!\n");
        }
    } else {
        printf("Empréstimo não concedido!\n");
} 
return 0;

}