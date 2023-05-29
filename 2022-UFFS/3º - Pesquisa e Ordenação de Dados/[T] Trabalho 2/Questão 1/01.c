/* Alunos: Gabriel e Luan Alecxander Krzyzaniak
01 – Implemente uma ordenação externa utilizando a restrição de que somente
     5 elementos podem ser armazenados em memória (vetores de teste no template).
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define MEMORY_LIMIT 5

void insertionSort(char *A, int size);
void printArray(char array[], int size);

// FUNÇÃO MAIN -------------------------------------------------------------------------------------------------------------------------------------------
int main(){
    printf("\nQUESTÃO 1\n");
    // Abrindo o arquivo a ser ordenado (somente leitura)
    FILE* unordered =  fopen("01unordered.txt","r");
    printf("\nArquivo original '01.txt' aberto.\n");

    // Criando os arquivos para a ordenação por intercalação. Com limite de 5 na memória, podemos utilizar 5 arquivos simultâneos.
    FILE* tempFiles[MEMORY_LIMIT];
    for (int i = 0; i < MEMORY_LIMIT; i++)
    {
        char tempName[20];
        sprintf(tempName, "temp_%d.txt", i+1); // Concatenando nome
        tempFiles[i] = fopen(tempName, "w+");
        printf("Arquivo temporario '%s' aberto.\n", tempName);
    }
    
    // Inserindo os números de 5 em 5 nos respectivos 5 arquivos (com ordenação interna).
    do{
        for (int i = 0; i < MEMORY_LIMIT; i++){
            int unorderedArray[MEMORY_LIMIT];
            memset(unorderedArray, 0, MEMORY_LIMIT);
            printArray(unorderedArray, MEMORY_LIMIT);

            // Inserir 5 unidades na lista desordenada;
            for (int k = 0; k < MEMORY_LIMIT; k++){
                if (feof(unordered) != 0){
                    break;
                }
                char tempChar = fgetc(unordered);
                if (tempChar != '\0'){
                    unorderedArray[k] = tempChar;
                    printf("%c inserido.\n",tempChar);
                }   
            }
            
            // Ordenar a lista;
            insertionSort(unorderedArray, MEMORY_LIMIT);
            printArray(unorderedArray, MEMORY_LIMIT);

            // Inserir a lista ordenada no arquivo-destino (temp_1-5).
            for (int t = 0; t < MEMORY_LIMIT; t++){
                if (unorderedArray[t] != 'a'){
                    fputc(unorderedArray[t], tempFiles[i]);
                    printf("temp_%d: caractere '%c' movido.\n", i + 1, unorderedArray[t]);
                }
            }

            if (feof(unordered) != 0){
                break;
            }
        } 
    } while (feof(unordered) == 0);

    // Abrindo o arquivo final da ordenação externa.
    FILE* ordered = fopen("01ordered.txt", "w");

    // Realoca o cursor ee cria uma lista com o primeiro caractere de cada um dos 5 arquivos.
    char temp[5];
    for (int i = 0; i < MEMORY_LIMIT; i++){
        rewind(tempFiles[i]);
        temp[i] = fgetc(tempFiles[i]);
        printf("temp_%d: caractere '%c'.\n", i + 1, temp[i]);
    }

    // Acha o menor caractere dentre os cinco e insere no arquivo final.
    int isEmpty = 0;
    do {
        char smallest = temp[0];
        int advance = 0;
        for (int i=1; i < MEMORY_LIMIT; i++){
            if (temp[i] < smallest){
                smallest = temp[i];
                advance = i;
            }

        // Avança o caractere do arquivo recém inserido.
        temp[advance] = fgetc(tempFiles[advance]);
        }
        isEmpty = 1;
        for (int i = 0; i < MEMORY_LIMIT; i++){
            if (feof(tempFiles[i]) == 0){
                isEmpty = 0;
            }
        }
        // Checa se todos os arquivos estão no final.
    } while (isEmpty != 1);



    // Fechando os arquivos.
    fclose(unordered);
    printf("Arquivo original '01unordered.txt' fechado.\n");
    for (int i = 0; i < MEMORY_LIMIT; i++){
        fclose(tempFiles[i]);
        printf("Arquivo temporario 'temp_%d.txt' fechado.\n");
    }
    fclose(ordered);
    printf("Arquivo final '01ordered.txt' fechado.\n");
    return 0;
}

// FUNÇÕES AUXILIARES ------------------------------------------------------------------------------------------------------------------

// Método de ordenação interna.
void insertionSort(char *A, int size){
    int i,j;
    for (i=1; i < size; i++){
        j = i; 
        while (j > 0 && A[j-1] > A[j] && A[j] != 'a'){ // compara o último fixado com o primeiro não-fixo
            char aux = A[j];
            A[j] = A[j-1];
            A[j-1] = aux;
            j = j - 1; // roda o loop
       }
    }
}

// Print de listas.
void printArray(char array[], int size){
    int aux;
    printf("\n[");
    for (aux=0; aux<size; aux++){
        if (aux == size-1){
            printf("%c]\n", array[aux]);
        } else { printf("%c, ",array[aux]); }
    }
}