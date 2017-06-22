#include <stdio.h>
#include "../movepecas.h"

int main(int argc, char const *argv[]) {

  //declarando vetor
  int klotski[5][6];

  cria_matriz(klotski);
  imprime_mat(klotski);

  //tentando mover T
  godown(klotski, 'T');
  imprime_mat(klotski);

  //tentando mover P para esquerda
  gotoleft(klotski, 'P');
  imprime_mat(klotski);

  //tentando mover P para esquerda
  gotoleft(klotski, 'P');
  imprime_mat(klotski);

  //tentando mover H para esquerda
  goup(klotski, 'H');
  imprime_mat(klotski);

  //tentando mover M para esquerda
  //gotoleft(klotski, 'M');
  //imprime_mat(klotski);
  

  return 0;
}
