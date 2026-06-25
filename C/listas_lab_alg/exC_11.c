#include <stdlib.h>
#include <stdio.h>


struct personagem{
int defesa;
int hp;
};

void recebeDano(struct personagem *b, int dano) {

}

int main(){

    struct personagem b;
    int dano_recebido;
    scanf("%d %d %d", &b.defesa, &b.hp, &dano_recebido);
    recebeDano(&b, dano_recebido);
    if(b.hp > 0){
        printf("%d (Vivo)\n", b.hp);
    } else {
        printf("%d (Morto)\n", b.hp);
    }

    return 0;
    
}