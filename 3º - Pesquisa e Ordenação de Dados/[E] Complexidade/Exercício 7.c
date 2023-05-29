#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double salario, salarioTotal, filhos, filhosTotal, quantia = 0;

    do {
        quantia += 1;
        filhosTotal += filhos;
        salarioTotal += salario;
        printf("\nINFORME");
        printf("\nSalário: ");
        scanf("%lf", &salario);
        printf("Filhos: ");
        scanf("%lf", &filhos);
    } while (salario >= 0);

    printf("\nRESULTADO");
    printf("\nMédia salarial: %.2lf\nMédia de filhos: %.2lf", salarioTotal/quantia, filhosTotal/quantia);
}