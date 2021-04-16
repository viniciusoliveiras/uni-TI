#include <stdio.h>
#include <stdlib.h>
#include "TAD_lista_aloc_enc.h"


// TipoLista * opera(TipoLista *p1, TipoLista *p2, int op);

int main(void)
{
    TipoLista *polinomio1 = (TipoLista *)malloc(sizeof(TipoLista));
    TipoLista *polinomio2 = (TipoLista *)malloc(sizeof(TipoLista));
    TipoLista *resultado = (TipoLista *)malloc(sizeof(TipoLista));
    CriaListaVazia(polinomio1);
    CriaListaVazia(polinomio2);
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

        printf("Insira o grau novinha >> ");
        scanf("%d", &item.grau);
        InsereLista(polinomio1, item);
    } while (1);

    printf("\n\nPolinomio2\n");
    do{
        printf("insira o coeficiente >> ");
        scanf("%f", &item2.coeficiente);

        if (item2.coeficiente == 0)
            break;

        printf("Insira o grau novinha >> ");
        scanf("%d", &item2.grau);
        InsereLista(polinomio2, item2);
    } while (1);
    
    printf("Polinomio1: ");
    ImprimeLista(polinomio1);
    printf("\nPolinomio2: ");
    ImprimeLista(polinomio2);   

        //SOMA
        // resultado = opera(polinomio1, polinomio2, 0);
        // ImprimeLista(resultado);

        // //SUBTRAÇÃO
        // resultado = opera(polinomio1, polinomio2, 1);
        // ImprimeLista(resultado);

    return 0;
}

// TipoLista *opera(TipoLista *p1, TipoLista *p2, int op);
// {
//     TipoLista *resultado = (TipoLista *)malloc(sizeoff(TipoLista));
//     CriaListaVazia(resultado);
    
//      switch(op)
//      {
//         case '0':
//             printf("%d" ,polinomio1 + polinomio2);
//             break;

//         case '1':
//             printf("%d" ,polinomio1 - polinomio2);
//             break;
//      }
        


//     return resultado;
// }
