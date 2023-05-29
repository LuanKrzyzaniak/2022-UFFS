#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MEMORY_LIMIT 5

void openFile(FILE** file, char* fileName, char* fileMode);
void insertionSort(int *A, int size);
void printArray(int *array, int size);

int main()
{
    // Abrindo arquivo principal
    FILE* unordered;
    openFile(&unordered, ".\\inputs\\unordered.txt", "r");
    
    // Criando arquivos temporários
    FILE* tempFiles[MEMORY_LIMIT];
    for (int i = 0; i < MEMORY_LIMIT; i++)
    {
        char tempName[20];
        sprintf(tempName, ".\\outputs\\temp_%d.txt", i+1); // Concatenando nome
        printf("%s\n", tempName);
        openFile(&tempFiles[i], tempName, "w+");
    }

    //
    while (feof(unordered) == 0)
    {
        for (int i = 0; i < MEMORY_LIMIT; i++)
        {
            printf("\nARQUIVO %d: \n", i+1);
            // Criando e zerando array temporária
            int unorderedArray[MEMORY_LIMIT];
            for (int i = 0; i < MEMORY_LIMIT; i++){unorderedArray[i] = 0;}
            
            // Inserindo valores na array temporária
            for (int k = 0; k < MEMORY_LIMIT; k++)
            {
                if (feof(unordered) != 0){break;}
                fscanf(unordered, "%d,", &unorderedArray[k]);
            }

            // Ordenação interna na array
            insertionSort(unorderedArray, MEMORY_LIMIT);
            printArray(unorderedArray, MEMORY_LIMIT);

            for (int k = 0; k < MEMORY_LIMIT; k++)
            {
                if ((char) unorderedArray[k] != '\0')
                {
                    if (feof(unordered) != 0){break;}
                    if(k == 4)
                    {
                        fprintf(tempFiles[i], "%d", unorderedArray[k]);
                    } else{
                        fprintf(tempFiles[i], "%d,", unorderedArray[k]);
                    }
                    printf("temp_%d: caractere '%d' movido.\n", i + 1, unorderedArray[k]); 
                }
            }
        }
    }
    return 0;
}

// FUNÇÕES AUXILIARES 
void openFile(FILE** file, char* fileName, char* fileMode)
{
    *file = fopen(fileName, fileMode);
    printf("Arquivo '%s' aberto.\n", fileName);
}

void insertionSort(int *A, int size)
{
    int i,j;
    for (i=1; i < size; i++)
    {
        j = i; 
        while (j > 0 && A[j-1] > A[j] && A[j] != '\0')
        { // compara o último fixado com o primeiro não-fixo
            char aux = A[j];
            A[j] = A[j-1];
            A[j-1] = aux;
            j = j - 1; // roda o loop
       }
    }
}

void printArray(int *array, int size)
{
    int aux;
    printf("[");
    for (aux=0; aux<size; aux++)
    {
        if (aux == size-1)
        {
            printf("%d]\n", array[aux]);
        } else { printf("%d, ",array[aux]); }
    }
}