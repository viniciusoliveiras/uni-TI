#include <stdio.h>
#include <stdlib.h>
#include "TAD_lista_aloc_enc.h"

//TAD lista com aloca��o encadeada
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista)
{
    lista->primeiro = (TipoCelula *)malloc(sizeof(TipoCelula));
    lista->ultimo = lista->primeiro;
    lista->primeiro->proximo = NULL;
}

//testa se a lista � vazia
int TestaListaVazia(TipoLista *lista)
{
    return (lista->primeiro == lista->ultimo);
}

//insere um elemento na lista
void InsereLista(TipoLista *lista, TipoItem item)
{
    lista->ultimo->proximo = (TipoCelula *)malloc(sizeof(TipoCelula));
    lista->ultimo = lista->ultimo->proximo;
    lista->ultimo->item = item;
    lista->ultimo->proximo = NULL;
}

//remove um elemento da lista
void RemoveLista(TipoLista *lista, TipoItem *item, TipoCelula *pt)
{
    if (TestaListaVazia(lista) || pt == NULL || pt->proximo == NULL)
    {
        printf("Erro: lista vazia ou posi��o inexistente\n");
        return;
    }
    TipoCelula *q = pt->proximo;
    *item = q->item;
    pt->proximo = q->proximo;
    if (pt->proximo == NULL)
        lista->ultimo = pt;
    free(q);
}

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista)
{
    TipoCelula *aux = lista->primeiro->proximo;
    while (aux != NULL)
    {
        printf("%.f/%i  ", aux->item.coeficiente, aux->item.grau);
        aux = aux->proximo;
    }
}
