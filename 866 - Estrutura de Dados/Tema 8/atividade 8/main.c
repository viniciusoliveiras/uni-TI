#include <stdio.h>
#include <stdlib.h>
#include "TAD_arvore_binaria_busca.h"
#include<time.h>

int main(void)
{
    printf("---------------------------\n");
    printf("  Arvore Binaria de Busca\n");
    printf("---------------------------\n");

    TipoCelula **arvore1 = (TipoCelula **)malloc(sizeof(TipoCelula *));

    printf("\nCriacao da Arvore vazia\n");
    CriaArvoreBinariaBuscaVazia(arvore1);
    printf("Verificacao se a arvore criada eh vazia -> %i\n", TestaArvoreBinariaBuscaVazia(arvore1));

    TipoItem item;
    int quantidade_desejada, i;

    printf("\nDigite a quantidade de numeros aleatorio -> ");
    scanf("%d", &quantidade_desejada);

    srand(time(NULL));
    for (i = 0; i < quantidade_desejada; i++)
    {
        int valor_aleatorio = rand() % 100;

        (i == 0) ? printf("Valores Aleatorio: %d ", valor_aleatorio) : printf("%d ", valor_aleatorio);

        item.chave = valor_aleatorio;
        InsereArvoreBinariaBusca(arvore1, item);
    }

    printf("\n\nImpressao da arvore apos a inclusao dos nos\n\n");
    ImprimeArvoreBinariaBusca(arvore1, 0);

    int numero_desejado;
    printf("\nDigite um numero do instante do acesso da arvore -> ");
    scanf("%d", &numero_desejado);

    TipoItem *item_desejado =  NULL;
    TipoItem item_excluido;

    item_desejado = BuscaArvoreBinariaBusca(arvore1, numero_desejado);
    item_excluido.chave = item_desejado->chave;

    printf("\nBusca por um no existente na arvore (chave %d) -> %d\n", numero_desejado, item_desejado->chave);

    RemoveArvoreBinariaBusca(arvore1, item_excluido);
    printf("Impressao da arvore apos a exclusao do no %d\n\n", item_excluido.chave);
    ImprimeArvoreBinariaBusca(arvore1, 0);

    return 0;
}
