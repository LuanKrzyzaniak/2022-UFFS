#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct funcionario {
    int id;
    char nome[31];
    double salario;
    struct funcionario *proximo;
}; 
typedef struct funcionario Funcionario;

Funcionario *insereNodoInicio(Funcionario *primeiro, int id, char nome[], double salario) {
    Funcionario *aux;
    aux = malloc(sizeof(Funcionario));
    aux->id = id;
    strcpy(aux->nome, nome);
    aux->salario = salario;
    aux->proximo = primeiro;
    primeiro = aux;

    printf("\nFuncionário adicionado no início:\nID: %d \nNome: %s \nSalário: %.2lf\n", aux->id, aux->nome, aux->salario);
    return primeiro;
}

Funcionario *insereNodoFim(Funcionario *primeiro, int id, char nome[], double salario) {
    Funcionario *aux, *ultimo;
    aux = malloc(sizeof(Funcionario));
    aux->id = id;
    strcpy(aux->nome, nome);
    aux->salario = salario;
    if (primeiro == NULL){
        aux->proximo = NULL;
        primeiro = aux;
    }
    else {
        for (ultimo = primeiro; ultimo != NULL; ultimo = ultimo->proximo){
            if (ultimo->proximo == NULL){
                ultimo->proximo = aux;
                aux->proximo = NULL;
                break;
            }
        }
    }
    printf("\nFuncionário adicionado no fim:\nID: %d \nNome: %s \nSalário: %.2lf\n", aux->id, aux->nome, aux->salario);
    return primeiro;
}


Funcionario *deletaNodo(Funcionario *primeiro, int idDelete) {
    Funcionario *aux, *anterior;
    for (aux = primeiro; aux != NULL; aux = aux->proximo){
        if (aux->id == idDelete){
            if (aux == primeiro){
                primeiro = primeiro->proximo;
                free(aux);
            }
            else {
                anterior->proximo = aux->proximo;
                free(aux);
            }
        };
        anterior = aux;
    }
    return primeiro;
}
    
void imprimeLista(Funcionario *primeiro) {
    Funcionario *aux;
    printf("\nLista de Funcionários!");
    for (aux = primeiro; aux != NULL; aux = aux->proximo){
        if (aux->proximo == NULL){
        printf("\nID: %d\tNome: %s\tSalário: %.2lf\n", aux->id, aux->nome, aux->salario);
        } else{
        printf("\nID: %d\tNome: %s\tSalário: %.2lf", aux->id, aux->nome, aux->salario);
        }
    }
}

void imprimeAoContrario(Funcionario *aux) {
    if (aux == NULL){
        return;
    }

    printf("\nID: %d\tNome: %s\tSalário: %.2lf", aux->id, aux->nome, aux->salario);
    imprimeAoContrario(aux->proximo);
}

int contaNodos(Funcionario *primeiro) {
    int nodos = 0;
    Funcionario *aux;
    for (aux = primeiro; aux != NULL; aux = aux->proximo){
        nodos += 1;
    }
    return printf("\nA lista tem %d nodos.\n", nodos);
}

void destroiLista(Funcionario *primeiro) {
    Funcionario *aux;
    while (primeiro != NULL){
        aux = primeiro;//armazena para apagar.
        primeiro = primeiro->proximo; //percorre a lista.
        free(aux); //função que apaga o nodo.
    }
    printf("\nA lista foi destruída.\n");
    return;
}

int main() {
    Funcionario *primeiro = NULL;

    primeiro = insereNodoInicio(primeiro, 55, "Lara", 7500);
    primeiro = insereNodoInicio(primeiro, 54, "Bety", 5000);
    primeiro = insereNodoInicio(primeiro, 53, "Luan", 6000);
    primeiro = insereNodoInicio(primeiro, 52, "Andrei", 7500);
    primeiro = insereNodoFim(primeiro, 56, "Pierre", 15000);
    primeiro = insereNodoFim(primeiro, 57, "Joseph", 3000);
    primeiro = insereNodoFim(primeiro, 58, "Robert", 2500);
    primeiro = insereNodoFim(primeiro, 59, "Bill", 1500);

    imprimeLista(primeiro);

    imprimeAoContrario(primeiro);

    contaNodos(primeiro); //adicionado para teste

    primeiro = deletaNodo(primeiro, 54);

    imprimeLista(primeiro);

    destroiLista(primeiro);


    return 0;
}