#include <stdlib.h>
#include <stdio.h>

int calc_area(){

    int base;
    int altura;

    printf("De a base do retangulo: ");
    scanf("%d", &base);

    printf("\nDe a altura do retangulo: ");
    scanf("%d", &altura);

    int a = base * altura;
    return a;
};



int main(){

    printf("\nA area do retangulo eh %d", calc_area());

    return 0;
}