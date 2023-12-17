#include <stdlib.h>
#include <stdio.h>

void ordenar(int n){

    int n1 = 1;
    int n2 = 1;

    if(n>=1){
        printf("%d\n", n1);
    }

    if(n>=2){
        printf("%d\n", n2);
    }

    if(n>2){
        int i = 0;
        for(i=3; i <= n; i++){
            int n3 = n1 + n2;
            printf("%d\n", n3);
            n1 = n2;
            n2 = n3;

        }
    }

    
}


int main(){

    int termos;

    printf("Escreva o numero de termos que sera mostrado da sequencia de Fibonacci: ");
    scanf("%d", &termos);

    ordenar(termos);

    return 0;
}