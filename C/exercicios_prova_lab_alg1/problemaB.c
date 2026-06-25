#include <stdlib.h>
#include <stdio.h>

int main() {

    char c1, c2, c3, c4, c5, c6, c7;

    scanf("%c", &c1);
    scanf("%c", &c2);
    scanf("%c", &c3);
    scanf("%c", &c4);
    scanf("%c", &c5);
    scanf("%c", &c6);
    scanf("%c", &c7);
    
    if (c1 == c7 && c2 == c6 && c3 == c5) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}