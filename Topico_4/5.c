#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double potencia(float n1, float n2){

    double r = pow(n1, n2); 

    return r;
}


int main(){

    float n1;
    float n2;

    printf("Escreva o primeiro numero: ");
    scanf("%f", &n1);

    printf("Escreva o segundo numero: ");
    scanf("%f", &n2);

    printf("%f", potencia(n1, n2));

    return 0;
}