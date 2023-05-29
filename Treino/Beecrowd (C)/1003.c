#include <stdio.h>
#include <string.h>

void Inverter(char p[], int e, int d){
    char aux;
    if (e >= d){
        printf("%s", p);
        return;
    }
    aux = p[e];
    p[e] = p[d];
    p[d] = aux;
    Inverter(p, e+1, d-1);
}


int main(){
    char palavra[10];
    scanf("%s", palavra);
    int e = 0;
    int d = strlen(palavra)-1;
    Inverter(palavra, e, d);
    return 0;
}