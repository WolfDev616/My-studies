#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Ponto {
    int x ;
    int y ;
};

int dentroRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p) {

    
    int isInsideTriangle = 0;
    // p1.x, p1.y (1) (esq baixo)
    // p2.x, p2.y (2) (dir alto)
    // p1.x, p2.y (3) (esq alto)
    // p2.x, p1.y (4) (dir baixo)
    
    if ((v1->x) <= (p->x) && (p->x) <= (v2->x) && (v1->y) <= (p->y) && (p->y) <= (v2->y)) {
        isInsideTriangle = 1;
    } else if ((v1->x) > (p->x) || (p->x) >= (v2->x) || (v1->y) > (p->y) || (p->y) > (v2->y)) {
        isInsideTriangle = 0;
    }
    
    printf("%d\n", isInsideTriangle);
    
    return isInsideTriangle;
}


int main() {

    struct Ponto p1, p2, p;

    printf("Insert coordinates x and y for 2 points:\n");
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);
    
    printf("Now insert coordinates x and y for the point to be checked:\n");
    scanf("%d %d", &p.x, &p.y);
    
    dentroRet (&p1, &p2, &p);

    return 0;
}