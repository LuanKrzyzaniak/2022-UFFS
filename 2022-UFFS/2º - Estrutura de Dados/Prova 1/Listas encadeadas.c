#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int id;
    char nome[20];
    float salario;
    struct funcionario *proximo;
}; typedef struct funcionario Funcionario;

Funcionario inserirInício(Funcionario *primeiro, int id, char nome, float salario) {
    Funcionario *aux;
    aux = malloc(sizeof(Funcionario));
    aux->id = id;
    strcpy(aux->nome, nome);
    aux->salario = salario;

    aux->proximo = primeiro;
    primeiro = aux;

    return primeiro;
}




int main() {
    
    Funcionario *primeiro;

    primeiro = malloc(sizeof(Funcionario));
    primeiro->id = 0;
    strcpy(primeiro->nome, "Luan");
    primeiro->salario = 2000.00;
    primeiro->proximo = NULL;




    return 0;
}