#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int maiorValor(a,b){
        if (a>b){
            return a;
        } else {
            return b;
        }
    }
    printf("\n%d", maiorValor(4,3));
    printf("\n%d", maiorValor(5,10));

    return 0;
}