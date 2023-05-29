// Aluno: Luan Alecxander Krzyzaniak
// Matrícula: 2211100017

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//TIPO FILA
typedef struct elementoFila{
    int identificador;
    char nome[21];  
    struct elementoFila *proximo;
} ElementoFila;

typedef struct {
    ElementoFila *primeiro;
    ElementoFila *ultimo;
} Fila;

//FUNÇÕES BÁSICAS
void iniciarPista(Fila *fila){
 fila->primeiro = NULL;
 fila->ultimo = NULL;
}

void autorizarDecolagem(Fila *fila) {
    ElementoFila *aux;

    aux = fila->primeiro;
    if (fila->primeiro == fila->ultimo) {
        fila->primeiro = NULL;
        fila->ultimo = NULL;
    }
    else {
        fila->primeiro = fila->primeiro->proximo;
    }

    free(aux);
}

void adicionarAviao(Fila *fila, int identificador, char nome[]) {
    ElementoFila *aux;
    
    aux = malloc(sizeof(ElementoFila));
    aux->identificador = identificador;
    strcpy(aux->nome, nome);
    aux->proximo = NULL;
    if (fila->primeiro == NULL) {
        fila->primeiro = aux;
        fila->ultimo = aux;
    }
    else {
        fila->ultimo->proximo = aux;
        fila->ultimo = aux;
    }

}

// FUNÇÕES ESPECIAIS
void quantiaAvioes(Fila *fila){
    ElementoFila *aux;
    int quantia = 0;
    for (aux = fila->primeiro; aux != NULL; aux = aux->proximo){
        quantia += 1;
    }
    printf("\nA quantia de aviões na pista é: %d",quantia);
}

void infoPrimeiro(Fila *fila){
    if (fila->primeiro == NULL){
        printf("\nNão há nenhum avião na pista.");
    } else {
        printf("\nInformações do primeiro avião da fila: \n  Identificador: %d\n  Nome: %s\n", fila->primeiro->identificador, fila->primeiro->nome);
    }
}

void listarAvioes(Fila *fila){
    ElementoFila *aux;
    if (fila->primeiro == NULL){
        printf("\nNão há nenhum avião na pista.");
    } else {
        for (aux = fila->primeiro; aux != NULL; aux = aux->proximo){
        printf("\nIdentificador: %d\nNome: %s\n", aux->identificador, aux->nome);
        }
    }
}

int main(){
    Fila pista;
    iniciarPista(&pista);


    int id;
    char name[21];

    int operacao;
    while (operacao != 0){
        printf("\nDigite:\n  '0' para encerrar a sessão\n  '1' para checar a quantia de aviões\n  '2' para autorizar decolagem\n  '3' para adicionar avião na pista\n  '4' para listar os aviões na pista\n  '5' para checar o primeiro avião na fila");
        printf("\n");
        scanf("%d", &operacao);
        switch(operacao){
            case 1: //Listar número de aviões aguardando na fila de decolagem
                quantiaAvioes(&pista);
                break;
            case 2: //Autorizar a decolagem do primeiro avião da fila
                autorizarDecolagem(&pista);
                break;
            case 3: //Adicionar um avião à fila de decolagem
                printf("\nInforme o identificador:");
                scanf("%d", &id);
                printf("\nInforme o nome:");
                scanf("%s", &name);
                adicionarAviao(&pista, id, name);
                break;
            case 4: //Listar todos os aviões na fila de decolagem
                listarAvioes(&pista);
                break;
            case 5: //Listar as informações do primeiro avião da fila
                infoPrimeiro(&pista);
                break;
            }
        }
    return 0;
}