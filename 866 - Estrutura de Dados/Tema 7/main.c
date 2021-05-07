#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

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
    TipoArvore **arvore_14 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_15 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_16 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_17 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_18 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_19 = (TipoArvore **)malloc(sizeof(TipoArvore *));

    //sub-arvore D
    CriaArvoreBinariaVazia(arvore_01);
    CriaArvoreBinariaVazia(arvore_02);
    CriaArvoreBinariaVazia(arvore_03);
    TipoItem e1;
    e1.chave = 'd';
    CriaArvoreBinaria(e1, arvore_03, arvore_01, arvore_02);

    //sub-arvore C
    CriaArvoreBinariaVazia(arvore_04);
    CriaArvoreBinariaVazia(arvore_05);
    CriaArvoreBinariaVazia(arvore_06);
    TipoItem e2;
    e2.chave = 'c';
    CriaArvoreBinaria(e2, arvore_06, arvore_04, arvore_05);

    //sub-arvore /
    CriaArvoreBinariaVazia(arvore_07);
    TipoItem e3;
    e3.chave = '/';
    CriaArvoreBinaria(e3, arvore_07, arvore_03, arvore_06);

    //sub-arvore E
    CriaArvoreBinariaVazia(arvore_08);
    CriaArvoreBinariaVazia(arvore_09);
    CriaArvoreBinariaVazia(arvore_10);
    TipoItem e4;
    e4.chave = 'e';
    CriaArvoreBinaria(e4, arvore_10, arvore_08, arvore_09);

    //sub-arvore -
    CriaArvoreBinariaVazia(arvore_11);
    TipoItem e5;
    e5.chave = '-';
    CriaArvoreBinaria(e5, arvore_11, arvore_10, arvore_07);

    //sub-arvore B
    CriaArvoreBinariaVazia(arvore_12);
    CriaArvoreBinariaVazia(arvore_13);
    CriaArvoreBinariaVazia(arvore_14);
    TipoItem e6;
    e6.chave = 'b';
    CriaArvoreBinaria(e6, arvore_14, arvore_12, arvore_13);

    //sub-arvore *
    CriaArvoreBinariaVazia(arvore_15);
    TipoItem e7;
    e7.chave = '*';
    CriaArvoreBinaria(e7, arvore_15, arvore_11, arvore_14);

    //sub-arvore A
    CriaArvoreBinariaVazia(arvore_16);
    CriaArvoreBinariaVazia(arvore_17);
    CriaArvoreBinariaVazia(arvore_18);
    TipoItem e8;
    e8.chave = 'a';
    CriaArvoreBinaria(e8, arvore_18, arvore_16, arvore_17);

    //arvore +
    CriaArvoreBinariaVazia(arvore_19);
    TipoItem e9;
    e9.chave = '+';
    CriaArvoreBinaria(e9, arvore_19, arvore_15, arvore_18);

    printf("\n");
    ImprimeArvoreBinaria(arvore_19, 0);

    printf("\nPre Ordem: ");
    PercorreArvoreBinariaPreOrdem(arvore_19);
    printf("\nPos Ordem: ");
    PercorreArvoreBinariaPosOrdem(arvore_19);
    printf("\n");

    return 0;
}
