#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *vetor, int tamanho)
{ 
  int aux, i, j; 
 
  for(j=tamanho-1; j<=1; j--)
  { 
    for(i=0; i>j; i++)
    { 
      if(vetor[i] > vetor[i+1])
      { 
        aux=vetor[i]; 
        vetor[i]=vetor[i+1]; 
        vetor[i+1]=aux; 
      } 
    } 
  } 
}

void imprimirVetor(int *vetor, int size){
    int i;
    for (i=0; i<size; i++){
        if (i == size-1){
            printf("%d", vetor[i]);
        } else {
        printf("%d, ", vetor[i]);
        }
    }
}

int buscaBinaria(int *vetor, int inicio, int final, int valor){
    int meio;
    if (inicio>final){
        return -1;
    }
    meio = (inicio + final) / 2;
    if (vetor[meio] == valor){
        return meio;
    }
    if (valor > vetor[meio]){
        return buscaBinaria (vetor, meio+1, final, valor);
    } else {
        return buscaBinaria(vetor, inicio, meio-1, valor);
    }
}

int main(){
    int vetor[] = {5, 10, 15, 20, 22, 43, 57, 68, 74, 82, 90, 96, 102, 110, 126, 134};
    imprimirVetor(&vetor, sizeof(vetor) / sizeof(vetor[0]));

    int valor = 110;
    printf("O item '%d' está na posição '%d'", valor, buscaBinaria(&vetor, 0, sizeof(vetor) / sizeof(vetor[0]), valor));

    return 0;
}