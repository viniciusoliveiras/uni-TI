#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <locale.h>
#include "TAD_arvore_binaria_busca.h"
#define MAX_CARACTER 50

typedef struct
{
    int id;
    char dado;
    int numero_repeticao;
}Package[MAX_CARACTER];

typedef struct
{
    int id;
    char dado;
}New_Package[SHRT_MAX];

int main(void)
{
    Package Pacote;
    New_Package Novo_Pct;
    char mensagem[MAX_CARACTER];
    int tamanho_mensagem, i;

    printf("Digite a mensagem: ");
    scanf("%s", &mensagem);
    printf("\n\n%s", mensagem);

    tamanho_mensagem = strlen(mensagem);
    printf("Numero de Caracteres: %d", tamanho_mensagem);

    for (i = 0; i < tamanho_mensagem; i++)
    {
        Pacote[i].id = i;
        Pacote[i].dado = mensagem[i];
        Pacote[i].numero_repeticao = 1 + (rand() % 9);
    }
    
    
    
    // setlocale(LC_ALL, "");

    // printf("---------------------------\n");
    // printf("  arvore Binaria de Busca\n");
    // printf("---------------------------\n");

    // TipoCelula **arvore1 = (TipoCelula **)malloc(sizeof(TipoCelula *));

    // printf("\nCriacao da arvore vazia\n");
    // CriaArvoreBinariaBuscaVazia(arvore1);
    // printf("\nVerificacao se a arvore criada eh vazia -> %i\n", TestaArvoreBinariaBuscaVazia(arvore1));

    // TipoItem item1_1, item1_2, item1_3, item1_4, item1_5, item1_6, item1_7, item1_8, item1_9;
    // item1_1.chave = 6;
    // item1_1.pacote = 'F';
    // item1_2.chave = 1;
    // item1_2.pacote = 'A';
    // item1_3.chave = 8;
    // item1_3.pacote = 'H';
    // item1_4.chave = 5;
    // item1_4.pacote = 'E';
    // item1_5.chave = 7;
    // item1_5.pacote = 'G';
    // item1_6.chave = 9;
    // item1_6.pacote = 'I';
    // item1_7.chave = 3;
    // item1_7.pacote = 'C';
    // item1_8.chave = 2;
    // item1_8.pacote = 'B';
    // item1_9.chave = 4;
    // item1_9.pacote = 'D';

    // InsereArvoreBinariaBusca(arvore1, item1_1);
    // InsereArvoreBinariaBusca(arvore1, item1_2);
    // InsereArvoreBinariaBusca(arvore1, item1_3);
    // InsereArvoreBinariaBusca(arvore1, item1_4);
    // InsereArvoreBinariaBusca(arvore1, item1_5);
    // InsereArvoreBinariaBusca(arvore1, item1_6);
    // InsereArvoreBinariaBusca(arvore1, item1_7);
    // InsereArvoreBinariaBusca(arvore1, item1_8);
    // InsereArvoreBinariaBusca(arvore1, item1_9);

    // printf("\nImpressao da arvore apos a inclusao dos nos\n\n");
    // ImprimeArvoreBinariaBusca(arvore1, 0);

    // int chave1_1 = 7;
    // TipoItem *item1_10 = NULL;
    // item1_10 = BuscaArvoreBinariaBusca(arvore1, chave1_1);
    // printf("\nBusca por um no existente na arvore (chave 7) -> %i\n", item1_10->chave);

    // printf("\nRemocao de um no da arvore (chave 1)\n\n");
    // RemoveArvoreBinariaBusca(arvore1, item1_2);
    // ImprimeArvoreBinariaBusca(arvore1, 0);

    // printf("\nRemocao de um no da arvore (chave 9)\n\n");
    // RemoveArvoreBinariaBusca(arvore1, item1_6);
    // ImprimeArvoreBinariaBusca(arvore1, 0);

    // printf("\nRemocao de um no da arvore (chave 8)\n\n");
    // RemoveArvoreBinariaBusca(arvore1, item1_3);
    // ImprimeArvoreBinariaBusca(arvore1, 0);

    // printf("\nRemocao de um no da arvore (chave 6)\n\n");
    // RemoveArvoreBinariaBusca(arvore1, item1_1);
    // ImprimeArvoreBinariaBusca(arvore1, 0);

    // int chave1_2 = 9;
    // TipoItem *item11 = NULL;
    // printf("\nBusca por um no inexistente na arvore (chave 9)\n");
    // item11 = BuscaArvoreBinariaBusca(arvore1, chave1_2);

    // printf("\nInsercao de um no existente na arvore (chave 3)\n");
    // InsereArvoreBinariaBusca(arvore1, item1_7);

    // printf("\nRemocao de um no inexistente na arvore (chave 8)\n");
    // RemoveArvoreBinariaBusca(arvore1, item1_3);

    return 0;
}
