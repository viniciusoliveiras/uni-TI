#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

// TAD pilha com alocacao encadeada
// cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha)
{
    pilha->topo = (TipoCelula *)malloc(sizeof(TipoCelula));
    pilha->fundo = pilha->topo;
    pilha->topo->proximo = NULL;
}

// testa se a pilha esta vazia
int TestaPilhaVazia(TipoPilha *pilha)
{
    return (pilha->topo == pilha->fundo);
}

// insere um elemento na pilha
void InserePilha(TipoPilha *pilha, TipoItem item)
{
    TipoCelula *aux = (TipoCelula *)malloc(sizeof(TipoCelula));
    pilha->topo->item = item;
    aux->proximo = pilha->topo;
    pilha->topo = aux;
}

// remove um elemento da pilha
void RemovePilha(TipoPilha *pilha, TipoItem *item)
{
    if (TestaPilhaVazia(pilha))
    {
        printf("Erro: pilha vazia\n");
        return;
    }
    TipoCelula *q = pilha->topo;
    pilha->topo = q->proximo;
    *item = q->proximo->item;
    free(q);
}

void CopiaValores(TipoPilha **topo, TipoPilha **topo2)
{
    TipoPilha *ptr;
    TipoPilha *ptr2;
    TipoPilha *aux; // Percorre a lista P2
    CriaPilhaVazia(aux);

    ptr = NULL;
    ptr2 = NULL;

    while(*topo2 != NULL)
    {
        if (ptr == NULL)
        {
            ptr = *topo2; /* Copia primeiro valor do topo2 para ptr */
            *topo2 = (*topo2)->topo->proximo; /* Desloca topo2 em 1 */
            ptr->topo->proximo = NULL; /* Define NULL, pois se tornara o elemento mais recente da pilha */
        }
        else
        {
            ptr2 = *topo2;
            *topo2 = (*topo2)->topo->proximo;
            ptr2->topo->proximo = ptr;
            ptr = ptr2;
        }
    }

    *topo2 = ptr;
}

// imprime os elementos da pilha
void ImprimePilha(TipoPilha *pilha)
{
    TipoCelula *aux = pilha->topo->proximo;
    while (aux != NULL)
    {
        printf("%i ", aux->item.chave);
        aux = aux->proximo;
    }
}