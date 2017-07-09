//item (c) Testa se já existe(busca na árvore)
//Implementado por José Ricardo Nominato de Oliveira
//Obs: O código está compilando, mas não sei se era exatamente isso que era pra fazer.
//Tentei cobrir a parte do Filipe, já que ele falou no grupo que talvez não poderia ajudar 

#include <stdio.h>
#include <stdlib.h>

struct arvgen {
    char estado;
    struct arvgen *vet[8];
};

/* Percorre a arvore de forma ordenada */
void ordenada(struct arvgen *pai) {
    if (!pai) return; /* se encontrar um nó terminal retorna */

    ordenada(pai->vet[0]);
    if (pai->estado) printf("%c ", pai->estado);
		ordenada(pai->vet[1]);
	if ((pai->estado) && (!pai->vet[1])) printf("%c ", pai->estado);
		ordenada(pai->vet[2]);
	if ((pai->estado) && (!pai->vet[2])) printf("%c ", pai->estado);
		ordenada(pai->vet[3]);
	if ((pai->estado) && (!pai->vet[3])) printf("%c ", pai->estado);
		ordenada(pai->vet[4]);
	if ((pai->estado) && (!pai->vet[4])) printf("%c ", pai->estado);
		ordenada(pai->vet[5]);
	if ((pai->estado) && (!pai->vet[5])) printf("%c ", pai->estado);
		ordenada(pai->vet[6]);
	if ((pai->estado) && (!pai->vet[6])) printf("%c ", pai->estado);
		ordenada(pai->vet[7]);	
}

/* Percorre a lista de forma pré-ordenada */
void preordenada(struct arvgen *pai) {
    if (!pai) return; /* se encontrar um nó terminal retorna */

    if (pai->estado) printf("%c ", pai->estado);
    preordenada(pai->vet[0]);
    preordenada(pai->vet[1]);
    preordenada(pai->vet[2]);
    preordenada(pai->vet[3]);
    preordenada(pai->vet[4]);
    preordenada(pai->vet[5]);
    preordenada(pai->vet[6]);
    preordenada(pai->vet[7]);
}

/* Percorre a lista de forma pós-ordenada */
void posordenada(struct arvgen *pai) {
    if (!pai) return; /* se encontrar um nó terminal retorna */

    posordenada(pai->vet[0]);
    posordenada(pai->vet[1]);
    posordenada(pai->vet[2]);
    posordenada(pai->vet[3]);
    posordenada(pai->vet[4]);
    posordenada(pai->vet[5]);
    posordenada(pai->vet[6]);
    posordenada(pai->vet[7]);
    if (pai->estado) printf("%c ", pai->estado);
}
