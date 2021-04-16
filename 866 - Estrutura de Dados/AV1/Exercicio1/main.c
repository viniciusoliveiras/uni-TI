#include <stdio.h>
#include <stdlib.h>
#include "TAD_lista_aloc_enc.h"


TipoLista * opera(TipoLista *p1, TipoLista *p2, int op);

int main(void)
{
    TipoLista *polinomio1 = (TipoLista *)malloc(sizeof(TipoLista));
    TipoLista *polinomio2 = (TipoLista *)malloc(sizeof(TipoLista));
    TipoLista *resultado = (TipoLista *)malloc(sizeof(TipoLista));
    CriaListaVazia(polinomio1);
    CriaListaVazia(polinomio2);

    float coeficiente;
    int grau;
    TipoItem item;
    TipoItem item2;

    // Insercao Lista ///
    lista->ultimo->item = item;
    polinomio1->ultimo->item.coeficiente;
    polinomio1->ultimo->item.grau;
    /*********************************/


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

    return 0;
}

TipoLista * opera(TipoLista *p1, TipoLista *p2, int op);
{
    TipoLista *resultado = (TipoLista *)malloc(sizeoff(TipoLista));
    CriaListaVazia(resultado);
    
     switch(opera)
        
        case '0'
            Printf("%d" ,polinomio1 + polinomio2);

        case '1'
            Printf("%d" ,polinomio1 - polinomio2);


    return resultado;
}
