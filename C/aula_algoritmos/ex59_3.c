/* Escreva um programa que leia o número de habitantes de uma determi-
nada cidade, o valor do kwh, e para cada habitante entre com os seguintes
dados: consumo do mês e o código do consumidor (1-Residencial, 2-
Comercial, 3-Industrial). No final imprima o maior, o menor e a média do
consumo dos habitantes; e por fim o total do consumo de cada categoria
de consumidor. */

#include <stdio.h>
#include <stdlib.h>


int main() {

    int hab;
    float kWh;
    float consumo_do_mes;
    float media;
    int seletor_de_consumo;
    float sum1, sum2, sum3;
    float maior_consumo = -10000;
    float menor_consumo = 10000;
    float total_consumo1, total_consumo2, total_consumo3;
    
    // Ler número de habitantes
    // Ler valor do kwh
    printf("Número de habitantes:\n");
    scanf("%d", &hab);
    printf("Qual o valor do kWh?\n");
    scanf("%f", &kWh);
    
    printf("[1]\tResidencial\n");
    printf("[2]\tComercial\n");
    printf("[3]\tIndustrial\n");

    
    // Para cada habitante, inserir consumo do mês e código. 
    for (int i = 1; i <= hab; i++) {
        printf("Consumo do mês do habitante %i:\n", i);
        scanf("%f", &consumo_do_mes);
        printf("Coloque aqui o seu tipo de consumo (em kW):\n");
        scanf("%i", &seletor_de_consumo);
        
        switch (seletor_de_consumo) {
            case 1: 
                sum1 += consumo_do_mes; break;
            case 2:
                sum2 += consumo_do_mes; break;
            case 3:
                sum3 += consumo_do_mes; break;
        }
        
        // Imprimir o maior consumo, menor consumo e a média 
        
        // Maior consumo
        if (consumo_do_mes > maior_consumo) {
            maior_consumo = consumo_do_mes;
        }
        
        
        // Menor consumo
        if (consumo_do_mes < menor_consumo) {
            menor_consumo = consumo_do_mes;
        }
        
    }  
    printf("-------------------------------------------------------------------------\n\n");
    
    // Maior e menor consumo

    printf("Maior consumo: %.2f kW.\n\n", maior_consumo);
    printf("Menor consumo: %.2f kW.\n\n", menor_consumo);
    
    // Média

    media = (sum1 + sum2 + sum3)/hab;

    printf("A média do consumo total foi %.2f kW.\n\n", media);
    
    // Total de consumo de cada categoria 
    
    total_consumo1 = sum1 * kWh;
    total_consumo2 = sum2 * kWh;
    total_consumo3 = sum3 * kWh;
    
    printf("-------------------------------------------------------------------------\n\n");
    
    // Total por categoria

    printf("Total de consumo da categoria residencial: R$%.2f\n\n", total_consumo1);
    printf("Total de consumo da categoria comercial: R$%.2f\n\n", total_consumo2);
    printf("Total de consumo da categoria industrial: R$%.2f\n\n", total_consumo3);
    
    
    return 0;
}