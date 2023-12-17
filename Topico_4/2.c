#include <stdlib.h>
#include <stdio.h>

float valor_atualizado(float valor, float reajuste){

    float novo_valor;
    
    novo_valor = valor + (valor * reajuste / 100);

    return novo_valor;
};


int main(){

    float valor_atual;
    float percentual;

    printf("Qual valor a ser atualizado: ");
    scanf("%f", &valor_atual);

    printf("Qual percentual de aumento: ");
    scanf("%f", &percentual);

    printf("\nO valor reajustado da mercadoria eh de R$%.2f", valor_atualizado(valor_atual, percentual));

    return 0;
}