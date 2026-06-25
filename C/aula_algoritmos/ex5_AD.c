#include <stdlib.h>
#include <stdio.h>

int main() {

    int num;
    int x;
    int count;

    scanf("%d", &num);
    
    int *str = malloc(num * sizeof(int));

    for (int i=0; i<num; i++) {
        scanf("%d", &str[i]);
    }

    scanf("%d", &x);

    for (int i=0; i<num; i++) {
        if (str[i]%x==0) {
            count++;
            printf("%d\n", str[i]);
        }
    }
    printf("%d numeros são múltiplos de %d\n", count, x);

    free(str);
    str = NULL;
    return 0;
}
