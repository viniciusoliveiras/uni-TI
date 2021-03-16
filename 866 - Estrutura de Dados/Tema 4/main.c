#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

int main(void)
{
    TipoPilha *P1 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P1);

	TipoPilha *P2 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P2);

    printf("%i\n", TestaPilhaVazia(P1));
    printf("%i\n", TestaPilhaVazia(P2));
    printf("** INSIRA ELEMENTOS DAS PILHAS **\n\tpara encerrar insecao digite -1\n\n");

    TipoItem item;
    while (item.chave != -1) {
        printf("Insira o elemento da Pilha 1: "); scanf("%d", &item.chave);

        if (item.chave != -1) {
            InserePilha(P1, item);
        }
    }

    while (item.chave != -1) {
        printf("Insira o elemento da Pilha 2: "); scanf("%d", &item.chave);

        if (item.chave != -1) {
            InserePilha(P2, item);
        }
    }    

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
