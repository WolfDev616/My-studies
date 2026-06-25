#include <stdlib.h>
#include <stdio.h>

int main() {

    char anyLetter;
    scanf("%c", &anyLetter);
    char lowerCapsLetter = anyLetter + 32;
    printf("%c \n", lowerCapsLetter);

    return 0;
}


