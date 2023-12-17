#include <stdlib.h>
#include <stdio.h>

char char1;
char char2;
char char3;

void ordenar(char ch1, char ch2, char ch3){

    char charx;

    if(ch1>ch2){
        charx = ch1;
        ch1 = ch2;
        ch2 = charx;
    }

    if(ch2>ch3){
        charx = ch2;
        ch2 = ch3;
        ch3 = charx;
    }

    if(ch1>ch2){
        charx = ch1;
        ch1 = ch2;
        ch2 = charx;
    }

    char1 = ch1;
    char2 = ch2;
    char3 = ch3;
    
}


int main(){

    printf("Escreva a letra 1: ");
    scanf("%c", &char1);
    fflush(stdin);

    printf("Escreva a letra 2: ");
    scanf("%c", &char2);
    fflush(stdin);

    printf("Escreva a letra 3: ");
    scanf("%c", &char3);

    ordenar(char1, char2, char3);

    printf("\nAs letras em ordem sao: '%c', '%c' e '%c'.", char1, char2, char3);

    return 0;
}