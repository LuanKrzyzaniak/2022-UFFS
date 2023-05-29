#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int times[4];
    int gols1, gols2;
    char time1[1], time2[1], winner[2];

    do{
        switch (winner){
            case 'A':
            if (gols1 == gols2){
                times[0] += 1;
            } else { times[0] += 3;}

            case 'B':
            if (gols1 == gols2){
                times[1] += 1;
            } else { times[1] += 3;}

            case 'C':
            if (gols1 == gols2){
                times[2] += 1;
            } else { times[2] += 3;}

            case 'D':
            if (gols1 == gols2){
                times[3] += 1;
            } else { times[3] += 3; }

            default:
            printf("Time inválido."); 
        }

        printf("\nInforme o primeiro time: ");
        scanf("%s", &time1);
        printf("Informe quantos gols: ");
        scanf("%d", &gols1);
        printf("Informe o segundo time: ");
        scanf("%s", &time1);         
        printf("Informe quantos gols: ");
        scanf("%d", &gols2);

        if (gols1 > gols2){
            strcpy(time1, winner);
        } else if (gols1 < gols2) {
            strcpy(time2, winner); 
        }

    } while (time1 == 'A' || time1 == 'B' || time2 == 'C' || time1 == 'D');

    return 0;
}
