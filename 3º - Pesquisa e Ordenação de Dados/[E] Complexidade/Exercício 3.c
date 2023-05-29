#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumUntil(int number){
    int aux, result = 0;
    for (aux=1; aux <= number; aux++){
        result += aux;
    }
    return result;
}

int main(){
    int number;

    printf("\nSOMA DE 1 ATÉ O NÚMERO");
    printf("\nEscolha um número:");
    scanf("%d", &number);
    printf("\nResultado: %d", sumUntil(number));

    return 0;
}