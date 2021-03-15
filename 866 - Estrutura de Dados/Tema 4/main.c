#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

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
    e21.chave = 49;
    e22.chave = 82;
    e23.chave = 65;
    e24.chave = 22;
    e25.chave = 74;

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
    printf("%i\n", e26.chave);

    RemovePilha(pilha, &e26);
    printf("%i\n", e26.chave);

    RemovePilha(pilha, &e26);
    printf("%i\n", e26.chave);

    printf("%i\n\n", TestaPilhaVazia(pilha));

    ImprimePilha(pilha);
    printf("\n\n");

    //--------------------    

    return 0;
}
