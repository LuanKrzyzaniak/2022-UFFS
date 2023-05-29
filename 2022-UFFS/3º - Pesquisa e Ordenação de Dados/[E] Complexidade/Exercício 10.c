#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int matricula, aux, alunos;
    alunos = 0;
    double nota, media, mediaTotal = 0;

        printf("\nMatrícula: ");
        scanf("%d", &matricula);
    while (matricula != 0){
        media = 0;
        for (aux = 1; aux < 11; aux++){
            printf("Nota %d: ", aux);
            scanf("%lf", &nota);
            media += nota;
        }
        mediaTotal += media/10;
        alunos += 1;
        printf("%d, média: %.2lf", matricula, media/10);
        printf("\nMatrícula: ");
        scanf("%d", &matricula);
    }
    printf("Média geral da turma: %.2lf", mediaTotal/alunos);

    return 0;
}