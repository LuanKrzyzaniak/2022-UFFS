#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    int valor;
    struct no *esquerdo;
    struct no *direito;
} No;

No iniciaArvore(){
    return NULL;
}

void inserirNo (No *raiz, int valor){
    No *aux;
    aux = malloc(sizeof(No));
    aux->valor = valor;
    aux->esquerdo = NULL;
    aux->direito = NULL;

    if (raiz == NULL){
        raiz = aux;
    } else{
        if (raiz->valor == valor){
            printf("\nJá presente.");
        }
        else if (raiz->valor > valor){
            inserirNo(raiz->esquerdo, valor);
        }
        else if (raiz->valor < valor){
            inserirNo(raiz->direito, valor);
        }
    }
}

void imprimeArvore(No *raiz){
    if (raiz == NULL){
        printf("A árvore está vazia.");
        return;
    } else if (raiz->esquerdo != NULL){
        imprimeArvore(raiz->esquerdo);
    } else if (raiz->direito != NULL){
        imprimeArvore(raiz->direito);
    }
    printf(" %d", raiz->valor);
}


int main() {
    No *arvore = iniciaArvore;

    int dado[] = { 12, 4, 10, 2, 18, 7, 21, 5 };
    
    int i;
    for (i=0; i< 8; i++){
      inserirNo(&arvore, dado[i]);  
    }
    
    imprimeArvore(&arvore);

    return 0;
}