#include <stdlib.h>
#include <stdio.h>

int main() {

    int num = 0;

    printf("Type a number for the vector size:\n");
    scanf("%d", &num);
    
    int *str = malloc(num * sizeof(int));

    for (int i=0; i<num; i++) {
        scanf("%d", &str[i]);
        printf("%d", str[i]);

    }

    free(str);
    str = NULL;
}
