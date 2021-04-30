#include <stdio.h>
#include <stdlib.h>
#include "TAD_arvore_binaria_aloc_enc.h"

//TAD arvore binaria com alocacao encadeada
//cria uma arvore binaria vazia
void CriaArvoreBinariaVazia(TipoArvore **arvore)
{
    *arvore = NULL;
}

//testa se a arvore binaria e vazia
int TestaArvoreBinariaVazia(TipoArvore **arvore)
{
    return (*arvore == NULL);
}

//cria uma arvore binaria
void CriaArvoreBinaria(TipoItem item, TipoArvore **arvore, TipoArvore **esquerda, TipoArvore **direita)
{
    *arvore = (TipoArvore *)malloc(sizeof(TipoArvore));
    (*arvore)->item = item;
    (*arvore)->esquerda = esquerda;
    (*arvore)->direita = direita;
}

//libera a arvore binaria
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

//verifica se um elemento pertence a arvore binaria
int PertenceArvoreBinaria(TipoArvore **arvore, TipoItem item)
{
    if (TestaArvoreBinariaVazia(arvore))
        return 0;
    else
        return (*arvore)->item.chave == item.chave ||
            PertenceArvoreBinaria((*arvore)->esquerda, item) ||
            PertenceArvoreBinaria((*arvore)->direita, item);
}

int AlturaDoNo(TipoArvore **arvore, TipoItem item)
{
    int altura = 1;
    
    if ((*arvore)->item.chave == item.chave)
    {
        printf("\nreturn 3");
        return 3;
    }
    else if(!TestaArvoreBinariaVazia((*arvore)->esquerda))
    {
        altura = AlturaDoNo((*arvore)->esquerda, item);
    }
    else if(!TestaArvoreBinariaVazia((*arvore)->direita))
    {
        altura = AlturaDoNo((*arvore)->direita, item);
    }
    
    altura = altura - 1;
    printf("\naltura: %d", altura);
    // altura = altura + 2;
    return altura;
}

//imprime os elementos da arvore binaria
void ImprimeArvoreBinaria(TipoArvore **arvore, int l)
{
    int i;

    if(!TestaArvoreBinariaVazia(arvore))
    {
        ImprimeArvoreBinaria((*arvore)->esquerda, l + 1);
        for (i = 0; i < l; i++)
            printf("   ");
        printf("%c\n", (*arvore)->item.chave);
        ImprimeArvoreBinaria((*arvore)->direita, l + 1);
    }
}

//percorre os elementos da arvore binaria em pre-ordem
void PercorreArvoreBinariaPreOrdem(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia(arvore))
    {
        printf("%c ", (*arvore)->item.chave);
        PercorreArvoreBinariaPreOrdem((*arvore)->esquerda);
        PercorreArvoreBinariaPreOrdem((*arvore)->direita);
    }
}

//percorre os elementos da arvore binaria em ordem simetrica / em-ordem
void PercorreArvoreBinariaOrdemSimetrica(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia(arvore))
    {
        PercorreArvoreBinariaOrdemSimetrica((*arvore)->esquerda);
        printf("%c ", (*arvore)->item.chave);
        PercorreArvoreBinariaOrdemSimetrica((*arvore)->direita);
    }
}

//percorre os elementos da arvore binaria em pos-ordem
void PercorreArvoreBinariaPosOrdem(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia(arvore))
    {
        PercorreArvoreBinariaPosOrdem((*arvore)->esquerda);
        PercorreArvoreBinariaPosOrdem((*arvore)->direita);
        printf("%c ", (*arvore)->item.chave);
    }
}

//percorre os elementos da arvore binaria em largura
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

//percorre os elementos da arvore binaria em profundidade
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

//calcula a altura de um no da arvore binaria
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

