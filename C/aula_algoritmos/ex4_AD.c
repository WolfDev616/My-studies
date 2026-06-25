#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *alloc_string(char *str,int num) {

    str = malloc(num * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
    } else {
        printf("Memory allocation successful!\n");

    }

    return str;
}

char *read_string(int num, char *str) {
    
    printf("Reading string activated\n");
    fgets(str, num, stdin);

    return str;
}


int main() {

    int num = 0;
    char * str;
    
    printf("Type a number for the string size:\n");
    scanf("%d", &num);
    getchar();

    str = alloc_string(str, num);
    str = read_string(num, str);

    for (int i=0; i<strlen(str);i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            printf("%c", str[i]);
        }
    }


    free(str);
    str = NULL;

    return 0;
}
