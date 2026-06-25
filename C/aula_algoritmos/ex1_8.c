#include <stdlib.h>
#include <stdio.h>


int squareNumber(int number) {
    
    int numberSquared = number * number;
    return numberSquared;

}



int main() {

    int n;

    printf("Type a number to be doubled: ");
    scanf("%d", &n);

    printf("%d\n", squareNumber(n));

    return 0;
}
