#include <stdio.h>
#include <stdlib.h>
#include "TAD_arvore_binaria_aloc_enc.h"

//TAD fila com alocação encadeada
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila)
{
    fila->frente = (TipoCelula *)malloc(sizeof(TipoCelula));
    fila->tras = fila->frente;
    fila->frente->proximo = NULL;
}

//testa se a fila é vazia
int TestaFilaVazia(TipoFila *fila)
{
    return (fila->frente == fila->tras);
}

//insere um elemento na fila
void InsereFila(TipoFila *fila, TipoArvore **item)
{
    fila->tras->proximo = (TipoCelula *)malloc(sizeof(TipoCelula));
    fila->tras = fila->tras->proximo;
    fila->tras->item = item;
    fila->tras->proximo = NULL;
}

//remove um elemento da fila
void RemoveFila(TipoFila *fila, TipoArvore **item)
{
    if (TestaFilaVazia(fila))
    {
        printf("Erro: fila vazia\n");
        return;
    }

    TipoCelula *q = fila->frente;
    fila->frente = fila->frente->proximo;
    *item = fila->frente->item;
    free(q);
}
