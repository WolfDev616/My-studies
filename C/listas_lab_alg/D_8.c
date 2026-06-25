#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct b{
    int id;
    int numAlbums;
    int members;
} Banda;

Banda returnBandWithMoreAlbuns(Banda b1, Banda b2) {

    if (b1.numAlbums > b2.numAlbums) {
        return b1;
    }   
    else if (b1.numAlbums < b2.numAlbums) {
        return b2;
    }   
    else {
        return b1;
    }
}

int main() {

    Banda b1;
    Banda b2;

    scanf("%d %d %d", &b1.id, &b1.numAlbums, &b1.members);
    scanf("%d %d %d", &b2.id, &b2.numAlbums, &b2.members);

    Banda result = returnBandWithMoreAlbuns(b1, b2);

    printf("%d ", result.id);
    printf("%d ", result.numAlbums);
    printf("%d\n", result.members);

    return 0;

}