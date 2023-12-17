#include <stdlib.h>
#include <stdio.h>

int calc_fatorial(int n){

    int f = 1;
    int i = 0;

    for(i = 1; i <= n; i++){
        f = f * i;
    }

    return f;
};


int main(){

    int num;

    printf("De o numero do qual vc queira o fatorial: ");
    scanf("%d", &num);

    printf("\nO calculo do fatorial do numero %d eh de %d", num ,calc_fatorial(num));

    return 0;
}