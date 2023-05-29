#include <stdio.h>
int main() {
  int a = 8;
  int *p;
  p = &a;
 
  printf("Valor de a: %d\n", a);
  printf("Endereco de a: %p\n", &a);
  printf("Valor de p: %p\n", p);
  printf("Valor apontado por p: %d\n", *p);

  int in = 2;
  float fl = 259.50;
  char letra = 'a';

  int *pi = &in;
  float *pf = &fl;
  char *pc = &letra;

  *pi = 8;
  *pf = 0.5;
  *pc = 'b';

  printf("\n %d %lf %c", in, fl, letra);

  typedef struct produto {
    char nome[21];
    float valor;
  } Produto;

  Produto primeira;
  strcpy(primeira.nome, "Batata");
  primeira.valor = 23.50;

  Produto *primeiro = &primeira;

  printf("\n%s %.2lf", primeiro->nome, primeiro->valor);

  return 0;
}
