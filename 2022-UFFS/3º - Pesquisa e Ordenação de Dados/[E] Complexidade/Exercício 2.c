#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiplyAdding(int a, int b){
    int aux, product;
    for (aux = 1; aux <= b; aux++){
        product += a;
    }
    return product;
}

int main(){
    int a, b;

    printf("\nMULTIPLICADOR");
    printf("\nEscolha um número: ");
    scanf("%d", &a);
    printf("\nDigite um multiplicador: ");
    scanf("%d", &b);
    printf("\nResultado: ");
    printf("%d", multiplyAdding(a,b));

    return 0;
}