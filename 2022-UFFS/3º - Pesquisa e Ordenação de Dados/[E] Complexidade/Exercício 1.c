#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printWithHalf(int number){
    int aux;
    for (aux = 1; aux<=number; aux++){
        if (aux == number / 2){
            printf("\nMetade");
            continue;
        }
        printf("\n%d", aux);
    }
}

int main(){
    int number;

    printf("\nDigite um número: ");
    scanf("%d", &number);
    printWithHalf(number);

    return 0;
}