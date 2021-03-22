#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

int main(void)
{
    TipoPilha *P1 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P1);

	TipoPilha *P2 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P2);

    printf("Vazio P1: %i\n", TestaPilhaVazia(P1));
    printf("Vazio P2: %i\n", TestaPilhaVazia(P2));
    printf("** INSIRA ELEMENTOS DAS PILHAS **\n\tpara encerrar insecao digite -1\n\n");

    TipoItem item;
    while (item.chave != -1) {
        printf("Insira o elemento da Pilha 1: "); scanf("%d", &item.chave);

        if (item.chave != -1) {
            InserePilha(P1, item);
        }
    }

    printf("\n");

    TipoItem item2;
    int contador = 0;
    while (item2.chave != -1) {
        printf("Insira o elemento da Pilha 2: "); scanf("%d", &item2.chave);

        if (item2.chave != -1) {
            InserePilha(P2, item2);
            contador += 1;
        }
    }    

    printf("\nPilha 1: ");
    ImprimePilha(P1);
    printf("\nPilha 2: ");
    ImprimePilha(P2);

    printf("\n\nVazio P1: %i\n", TestaPilhaVazia(P1));
    printf("Vazio P2: %i\n", TestaPilhaVazia(P2));

    CopiaValores(P1, P2);

    printf("\nPilha2: ");
    ImprimePilha(P2);

    return 0;
}
