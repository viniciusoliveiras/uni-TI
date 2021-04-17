#include <stdio.h>
#include <stdlib.h>
#include "TAD_lista_aloc_enc.h"


TipoLista * opera(TipoLista *p1, TipoLista *p2, int op)
{
    TipoLista * resultado = (TipoLista *)malloc(sizeof(TipoLista));
    CriaListaVazia(resultado);

    TipoCelula *aux = p1->primeiro->proximo;
    TipoCelula *aux2 = p2->primeiro->proximo;
    TipoItem valor_operacao;

    if (op == 0)
    {
        while (aux != NULL)
        {
            while (aux2 != NULL)
            {
                // SOMA                
                if(aux->item.grau == aux2->item.grau)
                {
                    valor_operacao.coeficiente = aux->item.coeficiente + aux2->item.coeficiente;
                    valor_operacao.grau = aux->item.grau;
                    InsereLista(resultado, valor_operacao);
                }
                aux2 = aux2->proximo;
            }
            aux = aux->proximo;
        }
    }
    else if (op == 1)
    {
        while (aux != NULL)
        {
            while (aux2 != NULL)
            {
                // SUBTRACAO
                if(aux->item.grau == aux2->item.grau)
                {
                    valor_operacao.coeficiente = aux->item.coeficiente - aux2->item.coeficiente;
                    valor_operacao.grau = aux->item.grau;
                    InsereLista(resultado, valor_operacao);
                }
                aux2 = aux2->proximo;
            }
            aux = aux->proximo;
        }
    }


    return resultado;
}

int main(void)
{
    TipoLista *polinomio1 = (TipoLista *)malloc(sizeof(TipoLista));
    TipoLista *polinomio2 = (TipoLista *)malloc(sizeof(TipoLista));
    // TipoLista *resultadoSoma = (TipoLista *)malloc(sizeof(TipoLista));
    // TipoLista *resultadoSub = (TipoLista *)malloc(sizeof(TipoLista));
    CriaListaVazia(polinomio1);
    CriaListaVazia(polinomio2);
    // CriaListaVazia(resultadoSoma);
    // CriaListaVazia(resultadoSub);
    TipoItem item;
    TipoItem item2;

    float coeficiente;
    int grau;

    // Insercao Lista ///
     //   lista->ultimo->item = item;
     //   polinomio1->ultimo->item.coeficiente == coeficiente;
     //   polinomio1->ultimo->item.grau == grau;
    /*********************************/

    printf("Polinomio1\n");
    do{
        printf("insira o coeficiente >> ");
        scanf("%f", &item.coeficiente);

        if (item.coeficiente == 0)
            break;

        printf("Insira o grau >> ");
        scanf("%d", &item.grau);
        InsereLista(polinomio1, item);
    } while (1);

    printf("\n\nPolinomio2\n");
    do{
        printf("insira o coeficiente >> ");
        scanf("%f", &item2.coeficiente);

        if (item2.coeficiente == 0)
            break;

        printf("Insira o grau >> ");
        scanf("%d", &item2.grau);
        InsereLista(polinomio2, item2);
    } while (1);
    
    printf("\n\nDeveria ter o resultado abaixo\n\n");
    
    // SOMA
    int soma = 0, subtracao = 1;
    printf("Soma: ");
    TipoLista *resultadoSoma = opera(polinomio1, polinomio2, soma);
    ImprimeLista(resultadoSoma);

    // SUBTRAÇÃO
    printf("\n\nSubtracao: ");
    TipoLista *resultadoSub = opera(polinomio1, polinomio2, subtracao);
    ImprimeLista(resultadoSub);

    return 0;
}