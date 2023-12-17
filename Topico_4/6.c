#include <stdlib.h>
#include <stdio.h>

int somatorio(int n){

    int i;
    int soma = 0;

    for(i=1; i <= n; i++){
        soma += i;
    }
    

    return soma;
    
}


int main(){

    int ni;

    printf("Escreva um numero de inteiros: ");
    scanf("%d", &ni);

    printf("A soma dos %d primeiro numeros inteiros eh igual a %d", ni, somatorio(ni));

    return 0;
}