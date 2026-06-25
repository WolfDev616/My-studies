#include <stdlib.h>
#include <stdio.h>

int main() {

    int num = 0;
    int oddCount, evenCount = 0;

    printf("Type a number for the vector size:\n");
    scanf("%d", &num);
    
    int *str = malloc(num * sizeof(int));

    for (int i=0; i<num; i++) {
        scanf("%d", &str[i]);
        if (str[i]%2==0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("%d of the numbers are even and %d are odd.\n", evenCount, oddCount);
    

    free(str);
    str = NULL;
}
