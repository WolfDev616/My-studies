/* Fa¸ca um programa que leia v´arios n´umeros, calcule e mostre:
• A soma dos n´umeros digitados
• A quantidade de n´umeros digitados
• A m´edia dos n´umeros digitados
• O maior n´umero digitado
• O menor n´umero digitado
• A m´edia dos n´umeros pares
Finalize a entrada de dados caso o usu´ario informe o valor 0 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaring variables
    float a = 0;
    float b = 0;
    float c = 0;
    char userChoice;
    int continueProgram = 1;

    printf("1\tSum two numbers\n");
    printf("2\tSubtract two numbers\n");
    printf("3\tMultiply two numbers\n");
    printf("4\tDivide two numbers\n");
    printf("5\tQuit program\n\n");

    
    
    while (continueProgram == 1) {
        userChoice = '0';
        scanf(" %c", &userChoice);

        if (userChoice >= '1' && userChoice <= '4') {
            printf("Insert two numbers:\n");
        }
        

        switch (userChoice) {
            case '1': 
                scanf("%f %f", &a, &b);
                c = a + b;
                printf("%.2f\n", c);
                break;
            case '2': 
                scanf("%f %f", &a, &b);
                c = a - b;
                printf("%.2f\n", c);
                break;
            case '3': 
                scanf("%f %f", &a, &b);
                c = a * b;
                printf("%.2f\n", c);
                break;
            case '4': 
                scanf("%f %f", &a, &b);
                c = a / b;
                printf("%.2f\n", c);
                break;
            case '5':
                continueProgram = 0;
                userChoice = '0';
                break;
            default: 
                printf("Invalid");
        }

    }


    return 0;
}