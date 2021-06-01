#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

int main(void)
{
    setlocale(LC_ALL, "");

    printf("------------------\n");
    printf("  �rvore Bin�ria\n");
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

    //sub-arvore A
    CriaArvoreBinariaVazia(arvore_01);
    CriaArvoreBinariaVazia(arvore_02);
    CriaArvoreBinariaVazia(arvore_03);
    TipoItem e1;
    e1.chave = 'a';
    CriaArvoreBinaria(e1, arvore_03, arvore_01, arvore_02);

    //sub-arvore B
    CriaArvoreBinariaVazia(arvore_04);
    CriaArvoreBinariaVazia(arvore_05);
    CriaArvoreBinariaVazia(arvore_06);
    TipoItem e2;
    e2.chave = 'b';
    CriaArvoreBinaria(e2, arvore_06, arvore_04, arvore_05);

    //sub-arvore C
    CriaArvoreBinariaVazia(arvore_07);
    CriaArvoreBinariaVazia(arvore_08);
    CriaArvoreBinariaVazia(arvore_09);
    TipoItem e3;
    e3.chave = 'c';
    CriaArvoreBinaria(e3, arvore_09, arvore_07, arvore_08);

    //sub-arvore D
    CriaArvoreBinariaVazia(arvore_10);
    CriaArvoreBinariaVazia(arvore_11);
    CriaArvoreBinariaVazia(arvore_12);
    TipoItem e4;
    e4.chave = 'd';
    CriaArvoreBinaria(e4, arvore_12, arvore_10, arvore_11);

    //sub-arvore +
    CriaArvoreBinariaVazia(arvore_13);
    TipoItem e5;
    e5.chave = '+';
    CriaArvoreBinaria(e5, arvore_13, arvore_3, arvore_6);

    //sub-arvore -

    

    // int s = PertenceArvoreBinaria(arvore_13, e3);
    // printf("\n%i", s);

    // printf("\n");
    // ImprimeArvoreBinaria(arvore_13, 0);

    // printf("\n");
    // PercorreArvoreBinariaPreOrdem(arvore_13);
    // printf("\n");
    // PercorreArvoreBinariaOrdemSimetrica(arvore_13);
    // printf("\n");
    // PercorreArvoreBinariaPosOrdem(arvore_13);
    // printf("\n");

    // PercorreArvoreBinariaLargura(arvore_13);
    // printf("\n");

    // PercorreArvoreBinariaProfundidade(arvore_13);
    // printf("\n");

    // *arvore_12 = LiberaArvoreBinaria(arvore_12);

    // printf("\n");
    // ImprimeArvoreBinaria(arvore_13, 0);

    // int h = CalculaAlturaArvoreBinaria(arvore_13);
    // printf("\n%i", h);

    return 0;
}
