#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bebida{
    char nome[10];
    int valor;
    struct bebida *proximo;
} Bebida;

typedef struct pedido{
Bebida *topo;
} Pedido;

void iniciaPilha(Pedido *pedido){
    pedido->topo = NULL;
}

void insereBebida (Pedido *pedido, char nome[10],  int valor){
    Bebida *aux;
    aux = malloc(sizeof(Bebida));
    strcpy(aux->nome, nome);
    aux->valor = valor;
    aux->proximo = pedido->topo;
    pedido->topo = aux;
    printf("\nInserida '%s' \n", nome);
}

void imprimePilha(Pedido *pedido){
    Bebida *aux;
    if (pedido->topo == NULL){
        printf("\nPEDIDO ------------\nNenhum item.\n");
    } else {
            printf("\n\nPEDIDO ------------");
        for (aux = pedido->topo; aux != NULL; aux = aux->proximo){
            printf("\nNome: %s\tValor: %d", aux->nome, aux->valor);
        }
        printf("\n");
    }
}

void removeItem(Pedido *pedido){
    Bebida *aux;
    if (pedido->topo == NULL){
        printf("\nA pilha está vazia.");
    } else {
        printf("\nO item '%s' foi removido.\n", pedido->topo->nome);
        aux = pedido->topo;
        pedido->topo = pedido->topo->proximo;
        free(aux);
    }
}

void liberaPilha(Pedido *pedido){
    Bebida *aux;
    if (pedido->topo == NULL){
        printf("\nA pilha está vazia.\n");
    } else {
        while (pedido->topo != NULL){
            printf("\nO item '%s' foi removido.", pedido->topo->nome);
            aux = pedido->topo;
            pedido->topo = pedido->topo->proximo;
            free(aux);
        }
        printf("\nA pilha foi liberada.\n");
    }
}

void buscaPilha(Pedido *pedido, char nome[10]){
    Bebida *aux;
    int posicao = 0;
    printf("\nBuscando por item '%s'\n", nome);
    for(aux = pedido->topo; aux != NULL; aux = aux->proximo){
        posicao +=1;
        if (strcmp(nome, aux->nome) == 0){
            printf("\nItem '%s' encontrado na %dº posição.\n", nome, posicao);
            return;
        }
    }
    printf("\nItem não encontrado.\n");
}


int main(){

// Cria e inicia a pilha
    Pedido pedido;
    iniciaPilha(&pedido);
    
// Printa a pilha    
    imprimePilha(&pedido);

// Insere na pilha    
    insereBebida(&pedido, "Coca-cola", 5);
    insereBebida(&pedido, "Pepsi", 6);
    insereBebida(&pedido, "Guarana", 85);
    insereBebida(&pedido, "Pureza", 100);

// Printa a pilha
    imprimePilha(&pedido);

// Deleta da pilha
    removeItem(&pedido);

// Printa a pilha
    imprimePilha(&pedido);

// Busca na pilha
    buscaPilha(&pedido, "Pepsi");

// Libera a pilha
    liberaPilha (&pedido);

// Printa a pilha
    imprimePilha(&pedido);


    return 0;
}