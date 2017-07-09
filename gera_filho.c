//item (d) Gera filho e chama recursividade
//Implementado por José Ricardo Nominato de Oliveira
#include <stdio.h>
#include <stdlib.h>

struct gera_filho {
    char estado;
    struct gera_filho *vet[8];
};

struct gera_filho *arvgen(struct gera_filho *pai, struct gera_filho *filho, char estado) {
    if (!filho) {
        /* aloca espaço para o novo nó */
        filho = (struct gera_filho *)malloc(sizeof(struct gera_filho));
        if (!filho) {
            printf("sem memória\n");
            exit(0);
        }
        /* Um novo nó ainda não tem filhos */
        filho->vet[0] = NULL;
        filho->vet[1] = NULL;
        filho->vet[2] = NULL;
        filho->vet[3] = NULL;
        filho->vet[4] = NULL;
        filho->vet[5] = NULL;
        filho->vet[6] = NULL;
        filho->vet[7] = NULL;
        filho->estado = estado;

        if (!pai) return filho; /* primeira entrada */

        /* coloca o nó abaixo da raíz escolhida de acordo com o conteúdo */
        if (estado < pai->estado){
            pai->vet[0] = filho;
		}
        else {
            pai->vet[1] = filho;
		}
		if ((estado < pai->estado) && (pai->vet[1] != filho)) {
            pai->vet[2] = filho;
		}
        else {
            pai->vet[3] = filho;
		}
        if ((estado < pai->estado) && (pai->vet[3] != filho)) {
            pai->vet[4] = filho;
		}
        else {
            pai->vet[5] = filho;
		}
        if ((estado < pai->estado) && (pai->vet[5] != filho)) {
            pai->vet[6] = filho;
		}
        else {
            pai->vet[7] = filho;
		}
        return filho;
    }
    /* se chama recursivamente até encontrar a posição adequada para o novo elemento */
    if (estado < filho->estado)
        arvgen(filho, filho->vet[0], estado);
    else
        arvgen(filho, filho->vet[1], estado);
        
    if ((estado < filho->estado) && (!arvgen(filho, filho->vet[1], estado)))
        arvgen(filho, filho->vet[2], estado);
    else
        arvgen(filho, filho->vet[3], estado);
        
    if ((estado < filho->estado) && (!arvgen(filho, filho->vet[3], estado)))
        arvgen(filho, filho->vet[4], estado);
    else
        arvgen(filho, filho->vet[5], estado);
        
    if ((estado < filho->estado) && (!arvgen(filho, filho->vet[5], estado)))
        arvgen(filho, filho->vet[6], estado);
    else
        arvgen(filho, filho->vet[7], estado);
}
