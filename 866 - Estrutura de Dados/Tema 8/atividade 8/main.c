#include <stdio.h>
#include <stdlib.h>
#include "TAD_arvore_binaria_busca.h"

int main(void)
{
    printf("---------------------------\n");
    printf("  Arvore Binaria de Busca\n");
    printf("---------------------------\n");

    TipoCelula **arvore1 = (TipoCelula **)malloc(sizeof(TipoCelula *));

    printf("\nCriacao da Arvore vazia\n");
    CriaArvoreBinariaBuscaVazia(arvore1);
    printf("\nVerificacao se a arvore criada eh vazia -> %i\n", TestaArvoreBinariaBuscaVazia(arvore1));

    TipoItem item1_1, item1_2, item1_3, item1_4, item1_5, item1_6, item1_7, item1_8, item1_9;
    item1_1.chave = 6;
    item1_1.pacote = 'F';
    InsereArvoreBinariaBusca(arvore1, item1_1);
    
    item1_2.chave = 1;
    item1_2.pacote = 'A';
    InsereArvoreBinariaBusca(arvore1, item1_2);
    
    item1_3.chave = 8;
    item1_3.pacote = 'H';
    InsereArvoreBinariaBusca(arvore1, item1_3);
    
    item1_4.chave = 5;
    item1_4.pacote = 'E';
    InsereArvoreBinariaBusca(arvore1, item1_4);
    
    item1_5.chave = 7;
    item1_5.pacote = 'G';
    InsereArvoreBinariaBusca(arvore1, item1_5);
    
    item1_6.chave = 9;
    item1_6.pacote = 'I';
    InsereArvoreBinariaBusca(arvore1, item1_6);
    
    item1_7.chave = 3;
    item1_7.pacote = 'C';
    InsereArvoreBinariaBusca(arvore1, item1_7);
    
    item1_8.chave = 2;
    item1_8.pacote = 'B';
    InsereArvoreBinariaBusca(arvore1, item1_8);
    
    item1_9.chave = 4;
    item1_9.pacote = 'D';
    InsereArvoreBinariaBusca(arvore1, item1_9);


    printf("\nImpressao da arvore apos a inclusao dos nos\n\n");
    ImprimeArvoreBinariaBusca(arvore1, 0);

    int chave1_1 = 7;
    TipoItem *item1_10 = NULL;
    item1_10 = BuscaArvoreBinariaBusca(arvore1, chave1_1);
    printf("\nBusca por um no existente na arvore (chave 7) -> %i\n", item1_10->chave);

    printf("\nRemocao de um no da arvore (chave 1)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_2);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    printf("\nRemocao de um no da arvore (chave 9)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_6);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    printf("\nRemocao de um no da arvore (chave 8)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_3);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    printf("\nRemocao de um no da arvore (chave 6)\n\n");
    RemoveArvoreBinariaBusca(arvore1, item1_1);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    int chave1_2 = 9;
    TipoItem *item11 = NULL;
    printf("\nBusca por um no inexistente na arvore (chave 9)\n");
    item11 = BuscaArvoreBinariaBusca(arvore1, chave1_2);

    printf("\nInsercao de um no existente na arvore (chave 3)\n");
    InsereArvoreBinariaBusca(arvore1, item1_7);

    printf("\nRemocao de um no inexistente na arvore (chave 8)\n");
    RemoveArvoreBinariaBusca(arvore1, item1_3);

    return 0;
}
