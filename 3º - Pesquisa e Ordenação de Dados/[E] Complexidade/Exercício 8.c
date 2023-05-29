#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int antonio = 150;
    int carlos = 110;
    int anos = 0;

    while (antonio > carlos){
        antonio += 2;
        carlos  += 3;
        anos += 1;
    }

    printf("\nDemoraria %d anos para Antonio ser ter a mesma altura de Carlos.", anos);
}