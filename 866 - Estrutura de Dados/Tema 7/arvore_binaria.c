#include <stdio.h>
#include <stdlib.h>
#include "TAD_arvore_binaria_aloc_enc.h"

//TAD �rvore bin�ria com aloca��o encadeada
//cria uma �rvore bin�ria vazia
void CriaArvoreBinariaVazia(TipoArvore **arvore)
{
    *arvore = NULL;
}

//testa se a �rvore bin�ria � vazia
int TestaArvoreBinariaVazia(TipoArvore **arvore)
{
    return (*arvore == NULL);
}

//cria uma �rvore bin�ria
void CriaArvoreBinaria(TipoItem item, TipoArvore **arvore, TipoArvore **esquerda, TipoArvore **direita)
{
    *arvore = (TipoArvore *)malloc(sizeof(TipoArvore));
    (*arvore)->item = item;
    (*arvore)->esquerda = esquerda;
    (*arvore)->direita = direita;
}

//libera a �rvore bin�ria
TipoArvore * LiberaArvoreBinaria(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia(arvore))
    {
        LiberaArvoreBinaria((*arvore)->esquerda);
        LiberaArvoreBinaria((*arvore)->direita);
        free(arvore);
    }
    return NULL;
}

//verifica se um elemento pertence � �rvore bin�ria
int PertenceArvoreBinaria(TipoArvore **arvore, TipoItem item)
{
    if (TestaArvoreBinariaVazia(arvore))
        return 0;
    else
        return (*arvore)->item.chave == item.chave ||
            PertenceArvoreBinaria((*arvore)->esquerda, item) ||
            PertenceArvoreBinaria((*arvore)->direita, item);
}

//imprime os elementos da �rvore bin�ria
void ImprimeArvoreBinaria(TipoArvore **arvore, int numeroEspaco)
{
    int i;

    if(!TestaArvoreBinariaVazia(arvore))
    {
        ImprimeArvoreBinaria((*arvore)->esquerda, numeroEspaco + 1);
        for (i = 0; i < numeroEspaco; i++)
            printf("   ");
        printf("%c\n", (*arvore)->item.chave);
        ImprimeArvoreBinaria((*arvore)->direita, numeroEspaco + 1);
    }
}

//percorre os elementos da �rvore bin�ria em pr�-ordem
void PercorreArvoreBinariaPreOrdem(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia(arvore))
    {
        printf("%c ", (*arvore)->item.chave);
        PercorreArvoreBinariaPreOrdem((*arvore)->esquerda);
        PercorreArvoreBinariaPreOrdem((*arvore)->direita);
    }
}

//percorre os elementos da �rvore bin�ria em ordem sim�trica
void PercorreArvoreBinariaOrdemSimetrica(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia(arvore))
    {
        PercorreArvoreBinariaOrdemSimetrica((*arvore)->esquerda);
        printf("%c ", (*arvore)->item.chave);
        PercorreArvoreBinariaOrdemSimetrica((*arvore)->direita);
    }
}

//percorre os elementos da �rvore bin�ria em p�s-ordem
void PercorreArvoreBinariaPosOrdem(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia(arvore))
    {
        PercorreArvoreBinariaPosOrdem((*arvore)->esquerda);
        PercorreArvoreBinariaPosOrdem((*arvore)->direita);
        printf("%c ", (*arvore)->item.chave);
    }
}

//percorre os elementos da �rvore bin�ria em largura
void PercorreArvoreBinariaLargura(TipoArvore **arvore)
{
    TipoArvore **sub_arvore;

    TipoFila *fila = (TipoFila *)malloc(sizeof(TipoFila));
    CriaFilaVazia(fila);
    InsereFila(fila, arvore);

    while (!TestaFilaVazia(fila))
    {
        RemoveFila(fila, &sub_arvore);
        printf("%c ", (*sub_arvore)->item.chave);
        if (!TestaArvoreBinariaVazia((*sub_arvore)->esquerda))
            InsereFila(fila, (*sub_arvore)->esquerda);
        if (!TestaArvoreBinariaVazia((*sub_arvore)->direita))
            InsereFila(fila, (*sub_arvore)->direita);
    }
}

//percorre os elementos da �rvore bin�ria em profundidade
void PercorreArvoreBinariaProfundidade(TipoArvore **arvore)
{
    TipoArvore **sub_arvore;

    TipoPilha *pilha = (TipoPilha *)malloc(sizeof(TipoPilha));
    CriaPilhaVazia(pilha);
    InserePilha(pilha, arvore);

    while (!TestaPilhaVazia(pilha))
    {
        RemovePilha(pilha, &sub_arvore);
        printf("%c ", (*sub_arvore)->item.chave);
        if (!TestaArvoreBinariaVazia((*sub_arvore)->direita))
            InserePilha(pilha, (*sub_arvore)->direita);
        if (!TestaArvoreBinariaVazia((*sub_arvore)->esquerda))
            InserePilha(pilha, (*sub_arvore)->esquerda);
    }
}

//calcula a altura de um n� da �rvore bin�ria
int CalculaAlturaArvoreBinaria(TipoArvore **arvore)
{
    int h1, h2, max;

    if (!TestaArvoreBinariaVazia((*arvore)->esquerda))
        h1 = CalculaAlturaArvoreBinaria((*arvore)->esquerda);
    else
        h1 = 0;
    if (!TestaArvoreBinariaVazia((*arvore)->direita))
        h2 = CalculaAlturaArvoreBinaria((*arvore)->direita);
    else
        h2 = 0;

    if (h1 > h2)
        max = h1;
    else
        max = h2;

    return 1 + max;
}

