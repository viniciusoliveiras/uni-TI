#include <stdio.h>
#include <stdlib.h>
#include "TAD_lista_aloc_enc.h"


TipoLista * opera(TipoLista *p1, TipoLista *p2, op);

int main(void)
{
    TipoLista *polinomio1 = (TipoLista *)malloc(sizeoff(TipoLista));
    TipoLista *polinomio2 = (TipoLista *)malloc(sizeoff(TipoLista));
    TipoLista *resultado = (TipoLista *)malloc(sizeoff(TipoLista));

    float coeficiente;
    int grau;
    TipoItem item;


    CriaListaVazia(polinomio1);
    printf("insira o coeficiente >> ");
    scanf("%f", &coeficiente);


    while (coeficiente != 0)
    {
        printf("\nInsira o grau novinha >> ");
        scanf("%d", &grau);
        item.coeficiente = coeficiente;
        item.grau = grau;


        InsereLista(polinomio1, item);

        printf("\nInsira o coeficiente >> ");
        scanf("%d", &coeficiente);
        
    }
        ImprimeLista(polinomio1);


     CriaListaVazia(polinomio2);
    printf("insira o coeficiente >> ");
    scanf("%f", &coeficiente);


    while (coeficiente != 0)
    {
        printf("\nInsira o grau novinha >> ");
        scanf("%d", &grau);
        item.coeficiente = coeficiente;
        item.grau = grau;


        InsereLista(polinomio2, item);

        printf("\nInsira o coeficiente >> ");
        scanf("%d", &coeficiente);
    }
        ImprimeLista(polinomio2);   

        //SOMA
        resultado = opera(polinomio1, polinomio2, 0);
        ImprimeLista(resultado);

        //SUBTRAÇÃO
        resultado = opera(polinomio1, polinomio2, 1);
        ImprimeLista(resultado);

    

    printf("---------\n");
    printf("  Lista\n");
    printf("---------\n");

    TipoLista *lista = (TipoLista *)malloc(sizeof(TipoLista));

    CriaListaVazia(lista);
    printf("%i\n", TestaListaVazia(lista));

    TipoItem termo1, termo2, termo3, termo4, termo5;
    termo1.coeficiente = 7.0;
    termo1.grau = 4;
    termo2.coeficiente = 3.5;
    termo2.grau = 3;
    termo3.coeficiente = 2.9;
    termo3.grau = 2;
    termo4.coeficiente = 1.8;
    termo4.grau = 1;
    termo5.coeficiente = 5.2;
    termo5.grau = 0;

    InsereLista(lista, termo1);
    InsereLista(lista, termo2);
    InsereLista(lista, termo3);
    InsereLista(lista, termo4);
    InsereLista(lista, termo5);

    printf("%i\n", TestaListaVazia(lista));

    ImprimeLista(lista);
    printf("\n\n");

    TipoItem termo6;

    TipoCelula *p = lista->primeiro;

    RemoveLista(lista, &termo6, p);
    printf("%.2f/%i\n", termo6.coeficiente, termo6.grau);

    RemoveLista(lista, &termo6, p);
    printf("%.2f/%i\n", termo6.coeficiente, termo6.grau);

    RemoveLista(lista, &termo6, p);
    printf("%.2f/%i\n", termo6.coeficiente, termo6.grau);

    printf("%i\n\n", TestaListaVazia(lista));

    ImprimeLista(lista);
    printf("\n\n");

    return 0;
}

TipoLista * opera(TipoLista *p1, TipoLista *p2, op);
{
    TipoLista *resultado = (TipoLista *)malloc(sizeoff(TipoLista));
    CriaListaVazia(resultado);
    

    return resultado;
}
