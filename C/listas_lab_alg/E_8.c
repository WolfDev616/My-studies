#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Ingrediente {
    int id;
    int qtd;
};

struct Receita {
    int id_pocao;
    struct Ingrediente componentes[2];
};


int escolherReceita(struct Receita livro_receitas[], int *inventario, int r) {

    int i;
    int maiorSomaIng = 0;
    int receita = 0;

    for (i = 0; i < r; i++) {

        int id1 = livro_receitas[i].componentes[0].id;
        int qtd1 = livro_receitas[i].componentes[0].qtd;

        int id2 = livro_receitas[i].componentes[1].id;
        int qtd2 = livro_receitas[i].componentes[1].qtd;

     
        if (qtd1 <= inventario[id1] &&
            qtd2 <= inventario[id2]) {

            printf("A receita %d pode ser criada\n",
                   livro_receitas[i].id_pocao);

            int soma = qtd1 + qtd2;

         
            if (soma > maiorSomaIng) {

                maiorSomaIng = soma;
                receita = livro_receitas[i].id_pocao;

            }
           
            else if (soma == maiorSomaIng &&
                     livro_receitas[i].id_pocao < receita) {

                receita = livro_receitas[i].id_pocao;
            }

        } else {

            printf("A receita %d não pode ser criada\n",
                livro_receitas[i].id_pocao);
            }
        }
        
        if (receita == 0) printf("Não sobra nada pra Elara :(\n");
        return receita;
    }
    


int main() {
    int m, r;
    scanf("%d %d", &m, &r);
    
    int inventario[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &inventario[i]);
    }
    
    struct Receita livro_receitas[r];
    for (int i = 0; i < r; i++) {
        scanf("%d %d %d %d %d",
              &livro_receitas[i].id_pocao,
              &livro_receitas[i].componentes[0].id,
              &livro_receitas[i].componentes[0].qtd,
              &livro_receitas[i].componentes[1].id,
              &livro_receitas[i].componentes[1].qtd);
    }

 
    int resultado = escolherReceita(livro_receitas, inventario, r);

    printf("%d\n", resultado);

    return 0;
}
