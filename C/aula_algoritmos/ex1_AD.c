#include <stdlib.h>
#include <stdio.h>

int main() {

    int num = 5;
    
    int *str = malloc(num * sizeof(int));

    for (int i=0; i<num; i++) {
        scanf("%d", &str[i]);
        printf("%d", str[i]);

    }

    free(str);
    str = NULL;
}
