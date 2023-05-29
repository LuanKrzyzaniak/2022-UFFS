/**
 * @file template.c
 * @author Luan Alecxander Krzyzaniak
 * @version 0.3
 * @date 2023-03-30
 *
 * @copyright Copyright (c) 2023
 *
 *
 * @brief Arquivo template para trabalho de Pesquisa e Ordenação.
 *
 *      Cada estudante deve implementar as funções conforme as assinaturas
 * abaixo e realizar as impressões dos vetores após a ordenação. Desta forma,
 * o(a) estudante deve implementar o trecho de código para impressão dos vetores
 * ordenados dentro da função `main` conforme o exemplo do Bubble Sort abaixo.
 *
 * Se necessário, declare e implemente funções start, int end)auxiliares para realizar as
 * ordenações.
 *
 * Importante:Não altere as assinaturas dos métodos de ordenação!
 *
 * Caso o vetor não possa ser ordenado por algum método, imprima uma mensagem de
 * aviso e o vetor original.
 *
 * Atenção: Antes de entregar, conferir se dos dados de documentação no início
 * do arquivo estão preenchidos corretamente.
 *
 */
#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size);
void troca(int *x, int *y);
void copia(int *A, int *v, int size);
void bubbleSort(int *A, int size);
void selectionSort(int *A, int size);
void insertionSort(int *A, int size);
void mergeSort(int *A, int size);
void merge(int *A, int start, int end);
void intercala(int *A, int start, int mid, int end);
void quickSort(int *A, int size);
void quick(int *A, int start, int end);
int particiona(int *A, int start, int end);
void heapSort(int *A, int size);
void criaHeap(int *A, int i, int size);
void countingSort(int *A, int size);
int maior(int *A, int size);
void radixSort(int *A, int size);
void counting(int *A, int size, int pos);

int main(){

    int vetor[] = {1, 22, -10, 38, 5, 7};
    int tamanhoVetor = sizeof(vetor)/sizeof(int);
    int isNegative;

    printf("\nVetor original: ");
    printArray(vetor, tamanhoVetor);
    printf("\nVetor tamanho = %d\n", tamanhoVetor);

    // bubble sort
    int bubbleVec[tamanhoVetor]; 
    copia(vetor, bubbleVec, tamanhoVetor);

    printf("\nBubble sort: ");
    bubbleSort(bubbleVec, tamanhoVetor);
    printArray(bubbleVec, tamanhoVetor);
    printf("\n");

    // selection sort
    int selectionVec[tamanhoVetor];
    copia(vetor, selectionVec, tamanhoVetor);

    printf("\nSelection sort: ");
    selectionSort(selectionVec, tamanhoVetor);
    printArray(selectionVec, tamanhoVetor);
    printf("\n");

    // insertion sort
    int insertionVec[tamanhoVetor];
    copia(vetor, insertionVec, tamanhoVetor);

    printf("\nInsertion sort: ");
    insertionSort(insertionVec, tamanhoVetor);
    printArray(insertionVec, tamanhoVetor);
    printf("\n");

    // merge sort
    int mergeVec[tamanhoVetor];
    copia(vetor, mergeVec, tamanhoVetor);

    printf("\nMerge sort: ");
    mergeSort(mergeVec, tamanhoVetor);
    printArray(mergeVec, tamanhoVetor);
    printf("\n");

    // quick sort
    int quickVec[tamanhoVetor];
    copia(vetor, quickVec, tamanhoVetor);

    printf("\nQuick sort: ");
    quickSort(quickVec, tamanhoVetor);
    printArray(quickVec, tamanhoVetor);
    printf("\n");

    // heap sort
    int heapVec[tamanhoVetor];
    copia(vetor, heapVec, tamanhoVetor);

    printf("\nHeap sort: ");
    heapSort(heapVec, tamanhoVetor);
    printArray(heapVec, tamanhoVetor);
    printf("\n");

    // counting sort
    int countingVec[tamanhoVetor];
    copia(vetor, countingVec, tamanhoVetor); 
    isNegative = 0;

    for (int i=0; i < tamanhoVetor; i++){
        if (countingVec[i] < 0){
            isNegative = 1;
            break;
        }
    }
    if (isNegative == 0){
        printf("\nCounting sort: ");
        countingSort(countingVec,tamanhoVetor);
        printArray(countingVec, tamanhoVetor);
        printf("\n");       
    } else {
        printf("\nErro: o Counting Sort nao aceita arrays contendo numeros negativos.\n");
    }


    // radix sort
    int radixVec[tamanhoVetor];
    copia(vetor, radixVec, tamanhoVetor); 
    isNegative = 0;
    
    for (int i=0; i < tamanhoVetor; i++){
        if (radixVec[i] < 0){
            isNegative = 1;
            break;
        }
    }
    if (isNegative == 0){
        printf("\nRadix sort: ");
        radixSort(radixVec,tamanhoVetor);
        printArray(radixVec, tamanhoVetor);
        printf("\n");       
    } else {
        printf("\nErro: o Radix Sort nao aceita arrays contendo numeros negativos.\n");
    }   
    return 0;
}

// General auxiliary functions
void printArray(int array[], int size){
    int aux;
    printf("\n[");
    for (aux=0; aux<size; aux++){
        if (aux == size-1){
            printf("%d]", array[aux]);
        } else { printf("%d, ",array[aux]); }
    }
}

void troca(int *x, int *y){
    int aux = *y;
    *y = *x;
    *x = aux;
}

void copia(int *A, int *V, int size){
    int i;
    for (i = 0 ; i < size ; i++)
        V[i] = A[i];
}

// Main sorting functions
void bubbleSort(int *A, int size){
    int i, j;
    for (i=0; i<size-2; i++){
        for (j=0; j<size-1; j++){
            if (A[j] > A[j+1]){
                troca(&A[j], &A[j+1]);
            }
        }
    }
}

void selectionSort(int A[], int size){
    int menor,i, j;
    for (i=0; i<size-2; i++){
        menor = i;
        for (j=i+1; j<size; j++){
            if (A[menor] > A[j]) {
                menor = j;
            }
        }
        troca(&A[i], &A[menor]);
    } 
}

void insertionSort(int *A, int size){
    int i,j;
    for (i=1; i < size; i++){
       j = i; 
       while (j > 0 && A[j-1] > A[j]){ // compara o último fixado com o primeiro não-fixo
           troca(&A[j], &A[j-1]);
           j = j - 1; // roda o loop
       }
    }
}

void mergeSort(int *A, int size){
    merge(A, 0, size-1);
}
//merge main
void merge(int *A, int start, int end){
    if (start<end){
        int mid = (start+end) / 2;
        merge(A, start, mid);
        merge(A, mid +1, end);
        intercala(A, start, mid, end);
    }
}
//merge aux
void intercala(int *A, int start, int mid, int end){
    int aux[end-start+1];
    int i = start;
    int j = mid +1;
    int k = 0;

    while (i <= mid && j <=end){
        if (A[i] <= A[j]){
            aux[k] = A[i];
            i++;
        } else {
            aux[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid){
        aux[k] = A[i];
        k++;
        i++;
    }

    while (j <= end){
        aux[k] = A[j];
        k++;
        j++;
    }

    for (int k=start; k<=end; k++){
        A[k] = aux[k-start];
    }
}

void quickSort(int *A, int size){
    quick(A, 0, size-1);
}
//quick main
void quick(int *A, int start, int end){
    if (start<end){
        int posPivo = particiona(A, 0, end);
        quick(A, start, posPivo-1);
        quick(A, posPivo+1, end);
    }
}
//quick aux
int particiona(int *A, int start, int end){
    int posPivo = end;
    int k = start;
    for (int i=start; i<end; i++){
        if (A[i] <= A[posPivo]){
            troca(&A[i], &A[k]);
            k++;
        }
    }
    if (A[k] > A[posPivo]){
        troca(&A[k], &A[posPivo]);
    }
    return posPivo;
}

void heapSort(int *A, int size){
    for (int k=size/2-1; k>=0; k--){
        criaHeap(A, k, size);
    }
    for (int k=size-1; k>=1; k--){
        troca(&A[0], &A[k]);
        criaHeap(A, 0, k);
    }
}
//heap aux
void criaHeap(int *A, int i, int size){
    int maior = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    if (left < size && A[left] > A[i]){
        maior = left;
    }
    if (right < size && A[right] > A[maior]){
        maior = right;
    }

    if (maior != i){
        troca(&A[i], &A[maior]);
        criaHeap(A, maior, size);
    }
}

void countingSort(int *A, int size){
    int k = maior(A, size);
    int count[k+1];
    int aux[size];

    for (int i = 0; i<=k; i++){
        count[i] = 0;
    }
    for (int i = 0; i<size; i++){
        count[A[i]]++;
    }
    for (int i = 1; i<=k; i++){
        count[i] += count[i-1];
    }
    for (int i = size-1; i >= 0 ; i--){
        count[A[i]] = count[A[i]] - 1;
        aux[count[A[i]]] = A[i];
    }
    for (int i = 0; i < size; i++){
        A[i] = aux[i];
    }
}
//counting aux
int maior(int *A, int size){
    int aux = A[0];
    for (int i = 1; i <size; i++){
        if (A[i] > aux){
            aux = A[i];
        }
    }
    return aux;
}

void radixSort(int *A, int size){
    int max = maior(A, size);
    
    for (int pos=1; (max/pos)>0; pos *=10){
        counting(A, size, pos);
    }
}
//radix aux
void counting(int *A, int size, int pos){
    int aux[size];
    int count[10];
    for (int i = 0; i<10; i++){
        count[i] = 0;
    }
    for (int i=0; i<size; i++){
        int digito = (A[i] / pos) % 10;
        count[digito]++;
    }
    for (int i=1; i<10; i++){
        count[i] = count[i] + count[i-1];
    }
    for (int i=size-1; i>=0; i--){
        int digito = (A[i]/pos)%10;
        count[digito]--;
        aux[count[digito]] = A[i];
    }
    for (int i=0; i<size; i++){
        A[i] = aux[i];
    }
}