#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Vector {
    float x ;
    float y ;
    float z ;
};


struct Vector sumVectors(struct Vector* v1, struct Vector *v2) {

    struct Vector vSum;

    vSum.x = abs(v1->x + v2->x); 
    vSum.y = abs(v1->y + v2->y); 
    vSum.z = abs(v1->z + v2->z);

    printf("%.2f %.2f %.2f\n", vSum.x, vSum.y, vSum.z);

    return vSum;


}

int main() {


    struct Vector v1, v2;

    printf("Insert two vectors of 3 dimensions:\n");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);


    sumVectors(&v1, &v2);

    return 0;
}