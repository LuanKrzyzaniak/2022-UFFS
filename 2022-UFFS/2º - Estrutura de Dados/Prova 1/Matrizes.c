#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int tabela[4][4];
   int a,b;
   int maior[2]= {NULL,NULL};

   // CRIANDO TABELA
   for (int a = 0 ; a <= 3 ; a += 1) {
      for (int b = 0 ; b <= 3 ; b += 1) {
         tabela[a][b] = (a*4) + b + 1;
      }
   }

   // IMPRIMINDO TABELA
   printf("\n Tabela inteira:");
   for (a = 0 ; a <= 3 ; a += 1) {
      printf("\n");
      for (b = 0 ; b <= 3 ; b += 1) {
         printf("%d\t", tabela[a][b]);
      }
   }

   // IMPRIMINDO DIAGONAL
   printf("\n\n Diagonal:");
   for (a = 0 ; a <= 3 ; a += 1){
      printf("\n");
      for (b = a ; b > 0 ; b -= 1) {
         printf("\t");
      }
      printf("%d", tabela[a][a]);
      }

   // IMPRIMINDO MAIOR VALOR
   for (a=0;a<=3;a+=1){
      for (b=0;b<=3;b+=1){
         if (tabela[a][b] > tabela[maior[1]][maior[2]]) {
            maior[1] = a;
            maior[2] = b;
         }
      }
   }
   printf("\nMaior valor: tabela[%d][%d] = %d", maior[1], maior[2], tabela[maior[1]][maior[2]]);

   return 0;
}