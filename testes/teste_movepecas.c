#include <stdio.h>
#include "../movepecas.h"

int main(int argc, char const *argv[]) {

  //declarando vetor
  int klotski[5][6];

  cria_matriz(klotski);
  imprime_mat(klotski);

  //tentando mover D
  printf("\nMovendo D para direita: \n");
  gotoright(klotski, 'D');
  imprime_mat(klotski);

  //tentando mover P para esquerda
  printf("\nMovendo P para esquerda: \n");
  gotoleft(klotski, 'P');
  imprime_mat(klotski);

  //tentando mover P para esquerda
  printf("\nMovendo P para esquerda: \n");
  gotoleft(klotski, 'P');
  imprime_mat(klotski);

  printf("\nMovendo H para cima: \n");
  //tentando mover H para cima
  goup(klotski, 'H');
  imprime_mat(klotski);

  //tentando mover M para esquerda
  printf("\nMovendo M para esquerda: \n");
  gotoleft(klotski, 'M');
  imprime_mat(klotski);


  return 0;
}
