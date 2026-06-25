#include <stdio.h>
#include <stdlib.h>

int sum_arrays(int* array1, int* array2, int* array3, int size1, int size2) {

    printf("Function sum arrays entered\n");
    if (size1 != size2) {
        return 0;
    }

    int *p1 = array1;
    int *p2 = array2;
    int *p3 = array3;

    for (int i=0; i<size1; i++) {
        *(array3 + i) = *(array1+i) + *(array2+i);
        p3++;
        p2++;
        p1++;
    }

    return 1;

}

int main() {

    int arr1[5] = {2, 3, 4, 5, 6};
    int arr2[5] = {2, 4, 6, 8, 10};
    int arr3[5];

    *arr3 = sum_arrays(arr1, arr2, arr3, 5, 5);

    for (int i=0; i<5; i++) {
        printf("%d\n", *(arr3 + i));
    }

    return 0;
}
