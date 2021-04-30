#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

int height(TipoArvore **arvore);

int main(void)
{
    setlocale(LC_ALL, "");

    printf("------------------\n");
    printf("  Arvore Binaria\n");
    printf("------------------\n");

    TipoArvore **arvore_01 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_02 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_03 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_04 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_05 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_06 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_07 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_08 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_09 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_10 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_11 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_12 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_13 = (TipoArvore **)malloc(sizeof(TipoArvore *));

    CriaArvoreBinariaVazia(arvore_01);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_01));

    CriaArvoreBinariaVazia(arvore_02);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_02));

    //sub-arvore D
    CriaArvoreBinariaVazia(arvore_03);
    TipoItem e1;
    e1.chave = 'd';
    CriaArvoreBinaria(e1, arvore_03, arvore_01, arvore_02);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_03));

    CriaArvoreBinariaVazia(arvore_04);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_04));

    CriaArvoreBinariaVazia(arvore_05);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_05));

    //sub-arvore E
    CriaArvoreBinariaVazia(arvore_06);
    TipoItem e2;
    e2.chave = 'e';
    CriaArvoreBinaria(e2, arvore_06, arvore_04, arvore_05);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_06));

    CriaArvoreBinariaVazia(arvore_07);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_07));

    CriaArvoreBinariaVazia(arvore_08);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_08));

    //sub-arvore F
    CriaArvoreBinariaVazia(arvore_09);
    TipoItem e3;
    e3.chave = 'f';
    CriaArvoreBinaria(e3, arvore_09, arvore_07, arvore_08);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_09));

    CriaArvoreBinariaVazia(arvore_10);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_10));

    //sub-arvore B
    CriaArvoreBinariaVazia(arvore_11);
    TipoItem e4;
    e4.chave = 'b';
    CriaArvoreBinaria(e4, arvore_11, arvore_10, arvore_03);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_11));

    //sub-arvore C
    CriaArvoreBinariaVazia(arvore_12);
    TipoItem e5;
    e5.chave = 'c';
    CriaArvoreBinaria(e5, arvore_12, arvore_06, arvore_09);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_12));

    //Arvore A
    CriaArvoreBinariaVazia(arvore_13);
    TipoItem e6;
    e6.chave = 'a';
    CriaArvoreBinaria(e6, arvore_13, arvore_11, arvore_12);
    // printf("\n%i", TestaArvoreBinariaVazia(arvore_13));

    // int s = PertenceArvoreBinaria(arvore_13, e3);
    // printf("\n%i", s);

    // printf("\nImprimeArvoreBinario arvore13:\n");
    // ImprimeArvoreBinaria(arvore_13, 0);

    // printf("\n\nPreOrdem:\n");
    // PercorreArvoreBinariaPreOrdem(arvore_13);
    // printf("\n\nEmOrdem / Simetrica:\n");
    // PercorreArvoreBinariaOrdemSimetrica(arvore_13);
    // printf("\n\nPosOrdem:\n");
    // PercorreArvoreBinariaPosOrdem(arvore_13);
    // printf("\n");

    // printf("\nBinaria Largura:\n");
    // PercorreArvoreBinariaLargura(arvore_13);
    // printf("\n");

    // printf("\nBinaria Profundidade:\n");
    // PercorreArvoreBinariaProfundidade(arvore_13);
    // printf("\n");

    // *arvore_12 = LiberaArvoreBinaria(arvore_12);

    // printf("\nImprimeArvoreBinario arvore13 pos liberar arvore 12:\n");
    // ImprimeArvoreBinaria(arvore_13, 0);

    // int h = CalculaAlturaArvoreBinaria(arvore_13);
    // printf("\nAltura Arvore Binaria 13: %i", h);

    // printf("\n\nFuncao Internet\n");
    // height(arvore_13);

    TipoItem noDesejado;
    char testeNo = 'c';
    noDesejado.chave = testeNo;
    printf("\n\nAltura do no %c eh: %d", testeNo, AlturaDoNo(arvore_13, noDesejado));
    

    return 0;
}

int height(TipoArvore **arvore)
{
    int u, v;

    if((*arvore) == NULL) return -1;

    u = height((*arvore)->esquerda);
    v = height((*arvore)->direita);

    printf("u: %d\n", u + 1);
    printf("v: %d\n\n",v + 1);

    if(u > v) return u + 1;
    else return v + 1;
}
