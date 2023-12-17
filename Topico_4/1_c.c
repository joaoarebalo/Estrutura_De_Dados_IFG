#include <stdlib.h>
#include <stdio.h>

int conversor_temperatura(int f){

    int c = (f - 32)*5/9;

    return c;
};



int main(){

    int fah;

    printf("De a temperatura em Fahrenheit: ");
    scanf("%d", &fah);

    printf("\nA temperatura de %d graus fahrenheit em graus celsius eh de %d", fah ,conversor_temperatura(fah));

    return 0;
}