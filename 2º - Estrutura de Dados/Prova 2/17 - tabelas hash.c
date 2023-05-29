#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definicoes:

#define SIZE 10

typedef struct elemento {
    int valor;
    struct elemento *proximo;
} Elemento;

typedef struct {
    Elemento *tab[SIZE];
} TabelaHash;

// funcoes:

int calculaHash(int valor){
    return valor % SIZE;
}

void inicializaTabelaHash(TabelaHash *th) {
    int i;
    for (i = 0; i<SIZE; i++){
        th->tab[i] = NULL;
    }
}

void insereTabelaHash(TabelaHash *th, int valor) {
    Elemento *aux;
    aux = malloc(sizeof(Elemento));
    aux->valor = valor;
    aux->proximo = NULL;

    int i = calculaHash(valor);

    aux->proximo = th->tab[i];
    th->tab[i] = aux;
    printf("1");
}

void busca(TabelaHash *th, int chave){
}

void removeElemento(TabelaHash *th, int chave){
}

void printa(TabelaHash *th){
    Elemento *aux;
    int i;
    printf("\n --- TABELA HASH ---");
    for (i=0; i<SIZE; i++){
        printf("\n[%d] =", i);
        aux = th->tab[i];
        while (aux != NULL){
            printf(" %d,", aux->valor);
            aux = aux->proximo;
        }
    }
}


int main(){
    TabelaHash *th;
    inicializaTabelaHash(&th);
    printf("\n\nTabela vazia: \n");
    printa(&th);

    insereTabelaHash(&th, 7);
    insereTabelaHash(&th, 17);
    insereTabelaHash(&th, 36);
    insereTabelaHash(&th, 100);
    insereTabelaHash(&th, 106);
    insereTabelaHash(&th, 205);
    printf("\n\nTabela apos insercoes: \n");
    printa(&th);
    
//    printf("\n\nBuscando elementos: \n");
//    busca(&th, 14);
//    busca(&th, 205);

//    printf("\n\Removendo elementos: \n");
//    removeElemento(&th, 205);
//    removeElemento(&th, 7);
//    removeElemento(&th, 106);
//    printf("\n\nTabela apos remocoes: \n");
//    printa(&th);

    return 0;
}
