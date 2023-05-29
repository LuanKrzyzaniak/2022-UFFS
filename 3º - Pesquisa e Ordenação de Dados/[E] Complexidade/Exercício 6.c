#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double number, total, between;
    total = -1;
    
    printf("\nPORCENTAGEM DE NÚMEROS ENTRE 10 E 20\nDigite 0 ou menor para encerrar.");

    do{
        total += 1;
        if (number >= 10 && number <= 20){
            between +=1;
            printf("Chegou");
        }
        printf("\nDigite um número: ");
        scanf("%lf", &number);
    } while (number > 0);

    printf("\nTESTE: %.2lf, %.2lf", total, between);
    printf("\nResultado: %.2lf ", between/total *10);
    return 0;
}