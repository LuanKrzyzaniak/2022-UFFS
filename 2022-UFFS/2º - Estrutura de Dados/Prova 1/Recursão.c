#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media (int n, float *vnotas)
{
  int i;
  float m = 0, soma = 0;
  
  //fazendo a somatória das notas
  for (i = 0; i < n; i++)
    soma = soma + vnotas[i];    
  
  //dividindo pela quantidade de elementos n
  m = soma / n;
  
  //retornando a média
  return m;
}

int fatorial(int x){
    if (x==0){
        return 1;
    }
    return fatorial(x-1) * x;
}

int doisN(int n){
    if (n==0){
        return 1;
    }
    return doisN(n-1) * 2;
}

int main(){

    printf("\n%d", fatorial(4));
    printf("\n%d", fatorial(10));

    printf("\n%d", doisN(3));
    
    float vnotas [3] = {0, 0, 0};

    printf("%lf",media(1, vnotas));
    return 0;
}