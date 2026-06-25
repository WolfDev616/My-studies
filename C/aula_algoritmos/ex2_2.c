/* Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes.
A primeira vez deve usar a estrutura de repetição for, a segunda while, e
a terceira do while. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // 1 to 100 using for:
    printf("Printing 1 to 100 using for loop: \n");
    for (int i=1; i <= 100; i++) {
        printf("%d \n", i);
    }

    printf("\n");
    
    // 1 to 100 using while:
    printf("Printing 1 to 100 using while loop: \n");
    int i2 = 1;
    while (i2 <= 100) {
        printf("%d \n", i2);
        i2++;
    }
    
    printf("\n");
    
    printf("Printing 1 to 100 using do while loop: \n");
    int i3 = 1;
    do {
        printf("%i \n", i3);
        i3++;
    } while (i3 <= 100);
    
    printf("\n");

    return 0;
}
