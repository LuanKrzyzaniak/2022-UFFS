#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b){
    return a+b;
}

int minus(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int division(int a, int b){
    return a/b;
}

int main(){
    char operation;
    int a, b;

    printf("\nBem vindo á calculadora!\n\nEscolha uma operação (+, -, * ou /): ");
    scanf("%c", &operation);

    switch (operation){
        case '+':
        printf("\nVocê escolheu soma.");
        printf("\nDigite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        printf("Resultado: %d", sum(a,b));
        break;
        
        case '-':
        printf("\nVocê escolheu subtração.");
        printf("\nDigite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        printf("Resultado: %d", minus(a,b));
        break;
        
        case '*':
        printf("\nVocê escolheu multiplicação.");        
        printf("\nDigite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        printf("Resultado: %d", multiply(a,b));
        break;

        case '/':
        printf("\nVocê escolheu divisão.");
        printf("\nDigite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        printf("Resultado: %d", division(a,b));
        break;

        default:
        printf("\nOpção inválida.");
    }
}