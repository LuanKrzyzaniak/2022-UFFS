#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char frase[6] = "dados";
   int tamanho,i,a,b;
   char reserva;

   // CRIANDO STRING
   printf("\nString: %s", frase);

   // LENDO TAMANHO DA STRING
    for (i=0; frase[i]!='\0'; i++);
    printf("\nTamanho da string: %d", i);
   
   // INVERTENDO STRING
    for (a = 0,b = i; a < b ; a++){
        b--;
        reserva = frase[a];
        frase[a] = frase[b];
        frase[b] = reserva;
    }
    printf("\nString invertida: %s", frase);
    return 0;
}
