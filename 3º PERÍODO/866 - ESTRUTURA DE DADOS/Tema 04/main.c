#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

/*
            COOP-ALUNOS
  Mateus Santos de Azevedo - 2020100086
  Rhuan Gonzaga Cunha Francisco - 2020100052
  Victor A. Santos Dionizio - 2020101250
  Vinicius Silva de Oliveira - 2020101398
  Bruno Sanches - 2015102356
*/

void ImprimePilhasTela(TipoPilha *P1, TipoPilha*P2)
{
    printf("\nPilha 1: ");
    if(TestaPilhaVazia(P1))
        printf("VAZIO");
    else
        ImprimePilha(P1);

    printf("\nPilha 2: ");
    if(TestaPilhaVazia(P2))
        printf("VAZIO");
    else
        ImprimePilha(P2);        

    printf("\n\n");
}

int main(void)
{
    TipoPilha *P1 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P1);

    TipoPilha *P2 = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(P2);


    printf("** INSIRA ELEMENTOS DAS PILHAS **\n\tpara encerrar insercao digite -1\n\n");

    TipoItem item;
    const int encerra_insercao = -1;
    while (item.chave != encerra_insercao) {
        printf("Insira o elemento da Pilha 1: "); scanf("%d", &item.chave);

        if (item.chave != encerra_insercao) {
            InserePilha(P1, item);
        }
    }

    printf("\n"); 

    TipoItem item2;
    int contador = 0;
    while (item2.chave != encerra_insercao) {
        printf("Insira o elemento da Pilha 2: "); scanf("%d", &item2.chave);

        if (item2.chave != encerra_insercao) {
            InserePilha(P2, item2);
            contador += 1;
        }
    }

    printf("\nPilhas Originais\n");
    ImprimePilhasTela(P1, P2);    

    // Se a pilha nao estiver vazia eu executo CopiaValores
    if(!TestaPilhaVazia(P2)) {
        CopiaValores(P1, P2);

        printf("\t\t** Pilha2 foi passada para Pilha1 **\n\nPilhas Pos Copia\n");
        ImprimePilhasTela(P1, P2);
    } else {
        printf("\t\tPilha 2 esta vazia.\nA representacao das pilhas fica a mesma que a de cima");
    }

    free(P1);
    free(P2);

    return 0;
}
