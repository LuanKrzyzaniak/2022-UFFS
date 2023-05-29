#include <stdio.h>
#include <string.h>

int main(){
    int estudantes, presentes;
    int condicao;
    char assinatura[42];

    while (scanf("%d", &estudantes) != EOF){
        char assinatura_normal[estudantes][42];
        for (condicao = 0; condicao < estudantes; condicao++){
            scanf("%s", assinatura);
            strcpy(assinatura_normal[condicao], assinatura);
        }   

        scanf("%d", &presentes);
        char assinatura_dia[presentes][42];
        for (condicao = 0; condicao < presentes; condicao++){
            scanf("%s", assinatura);
            strcpy(assinatura_normal[condicao], assinatura);

        int L1,L2,letra1,letra2;
        for (L1 = 0; L1 < strlen(estudantes); L1++){
            for (L2 = 0; L2 < strlen(presentes); L2++){
                for (letra1 = 0; letra1 < strlen(estudantes[&L1]); letra1++){
                        for (letra2 = 0; letra2 < strlen(estudantes[&L2]); letra2++){
                            int igual = 1;
                            if (estudantes[&L1][&letra] =! presentes[&L2][&letra]){
                            igual = 0;
                        if (igual == 1){

                        }
                    }
                }
            }
        }

        
    }
    return 0;
}
