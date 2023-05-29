#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial (int number){
    if (number == 1){
        return 1;
    }
    return number * factorial( number - 1);
}

int main(){
    int number;

    printf("\nCÁLCULO DE FATORIAL");
    printf("\nEscolha um número: ");
    scanf("%d", &number);
    printf("Resultado: %d", factorial(number));
    return 0;
}