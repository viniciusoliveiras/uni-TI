#include <stdio.h>
#include <stdlib.h>
#include "TADs_pilha_fila_aloc_enc.h"

int main(void)
{
    //--------------------

    printf("---------\n");
    printf("  Pilha\n");
    printf("---------\n");

	TipoPilha *pilha = (TipoPilha *)malloc(sizeof(TipoPilha));

    CriaPilhaVazia(pilha);
    printf("%i\n", TestaPilhaVazia(pilha));

    TipoItem e21, e22, e23, e24, e25;
    e21.valor = 49;
    e22.valor = 82;
    e23.valor = 65;
    e24.valor = 22;
    e25.valor = 74;

    InserePilha(pilha, e21);
    InserePilha(pilha, e22);
    InserePilha(pilha, e23);
    InserePilha(pilha, e24);
    InserePilha(pilha, e25);

    printf("%i\n", TestaPilhaVazia(pilha));

    ImprimePilha(pilha);
    printf("\n\n");

    TipoItem e26;

    RemovePilha(pilha, &e26);
    printf("%i\n", e26.valor);

    RemovePilha(pilha, &e26);
    printf("%i\n", e26.valor);

    RemovePilha(pilha, &e26);
    printf("%i\n", e26.valor);

    printf("%i\n\n", TestaPilhaVazia(pilha));

    ImprimePilha(pilha);
    printf("\n\n");

    //--------------------

    printf("--------\n");
    printf("  Fila\n");
    printf("--------\n");

    TipoFila *fila = (TipoFila *)malloc(sizeof(TipoFila));

    CriaFilaVazia(fila);
    printf("%i\n", TestaFilaVazia(fila));

    TipoItem e31, e32, e33, e34, e35;
    e31.valor = 'A';
    e32.valor = 'B';
    e33.valor = 'C';
    e34.valor = 'D';
    e35.valor = 'E';

    InsereFila(fila, e31);
    InsereFila(fila, e32);
    InsereFila(fila, e33);
    InsereFila(fila, e34);
    InsereFila(fila, e35);

    printf("%i\n", TestaFilaVazia(fila));

    ImprimeFila(fila);
    printf("\n\n");

    TipoItem e36;

    RemoveFila(fila, &e36);
    printf("%c\n", e36.valor);

    RemoveFila(fila, &e36);
    printf("%c\n", e36.valor);

    RemoveFila(fila, &e36);
    printf("%c\n", e36.valor);

    printf("%i\n\n", TestaFilaVazia(fila));

    ImprimeFila(fila);
    printf("\n\n");

    return 0;
}
