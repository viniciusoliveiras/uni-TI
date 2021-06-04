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
    int tamanho_mensagem, 
        numero_repeticao_geral = 0, 
        i = 0;

    printf("Digite a mensagem: ");
    fgets(mensagem, MAX_CARACTER, stdin);
    fflush(stdin);

    // IMPRESSAO DA MENSAGEM
    printf("%s\n", mensagem);

    tamanho_mensagem = strlen(mensagem);

    // CRIACAO DOS PACOTES
    for (i = 0; i < tamanho_mensagem; i++)
    {
        const int aleatorio_1_10 = 1 + (rand() % 10);

        Pacote[i].id = i;
        Pacote[i].dado = mensagem[i];
        Pacote[i].numero_repeticao = aleatorio_1_10;

        numero_repeticao_geral += Pacote[i].numero_repeticao;
    }

    // NOVA SEQUENCIA DE PACOTES
    for (i = 0; i < numero_repeticao_geral; i++)
    {
        const int pct_aleatorio = (rand() % tamanho_mensagem);

        Novo_Pct[i].id = Pacote[pct_aleatorio].id;
        Novo_Pct[i].dado = Pacote[pct_aleatorio].dado;
    }
    
    printf("\n");

    // IMPRESSAO DA NOVA SEQUENCIA DE PACOTES
    for (i = 0; i < numero_repeticao_geral; i++)
    {
        printf("(%d %c) ", Novo_Pct[i].id, Novo_Pct[i].dado);
    }

    printf("\n\n");
    system("pause");

    // ARVORE BINARIA DE BUSCA
    TipoCelula **arvore = (TipoCelula **)malloc(sizeof(TipoCelula *));
    CriaArvoreBinariaBuscaVazia(arvore);
    TipoItem pacotes_atualizados;

    for (i = 0; i < numero_repeticao_geral; i++)
    {
        pacotes_atualizados.chave = Novo_Pct[i].id;
        pacotes_atualizados.pacote = Novo_Pct[i].dado;
        InsereArvoreBinariaBusca(arvore, pacotes_atualizados);
    }

    system("cls");
    printf("Impressao da Arvore:\n\n");
    ImprimeArvoreBinariaBusca(arvore, 0);
    printf("\n\nImpressao da Mensagem: %s", mensagem);

    return 0;
}