#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

void percorre(TipoArvore **arvore)
{
    if (!TestaArvoreBinariaVazia((*arvore)->esquerda))
    {
        printf("(");
        percorre((*arvore)->esquerda);
    }

    if(
        (*arvore)->item.chave == '+' ||
        (*arvore)->item.chave == '-' ||
        (*arvore)->item.chave == '/' ||
        (*arvore)->item.chave == '*' 
    ) {
        printf(" %c ", (*arvore)->item.chave);
    } else {
        printf("%c", (*arvore)->item.chave);
    };

    if (!TestaArvoreBinariaVazia((*arvore)->direita))
    {
        percorre((*arvore)->direita);
        printf(")");
    }
}

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
    TipoArvore **arvore_20 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_21 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_22 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_23 = (TipoArvore **)malloc(sizeof(TipoArvore *));

    //BRACO ESQUERDO DA ARVORE BINARIA
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
    CriaArvoreBinaria(e5, arvore_13, arvore_03, arvore_06);

    //sub-arvore -
    CriaArvoreBinariaVazia(arvore_14);
    TipoItem e6;
    e6.chave = '-';
    CriaArvoreBinaria(e6, arvore_14, arvore_09, arvore_12);

    //sub-arvore /
    CriaArvoreBinariaVazia(arvore_15);
    TipoItem e7;
    e7.chave = '/';
    CriaArvoreBinaria(e7, arvore_15, arvore_13, arvore_14);


    //BRACO DIREITO DA ARVORE BINARIA
    //sub-arvore E
    CriaArvoreBinariaVazia(arvore_16);
    CriaArvoreBinariaVazia(arvore_17);
    CriaArvoreBinariaVazia(arvore_18);
    TipoItem e8;
    e8.chave = 'e';
    CriaArvoreBinaria(e8, arvore_18, arvore_16, arvore_17);

    //sub-arvore F
    CriaArvoreBinariaVazia(arvore_19);
    CriaArvoreBinariaVazia(arvore_20);
    CriaArvoreBinariaVazia(arvore_21);
    TipoItem e9;
    e9.chave = 'f';
    CriaArvoreBinaria(e9, arvore_21, arvore_19, arvore_20);

    //sub-arvore +
    CriaArvoreBinariaVazia(arvore_22);
    TipoItem e10;
    e10.chave = '+';
    CriaArvoreBinaria(e10, arvore_22, arvore_18, arvore_21);


    //ARVORE BINARIA RAIZ
    //arvore *
    CriaArvoreBinariaVazia(arvore_23);
    TipoItem e11;
    e11.chave = '*';
    CriaArvoreBinaria(e11, arvore_23, arvore_15, arvore_22);

    percorre(arvore_23);

    return 0;
}
