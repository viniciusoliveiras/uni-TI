#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

/*
            COOP-ALUNOS
  Mateus Santos de Azevedo - 2020100086
  Rhuan Gonzaga Cunha Francisco - 2020100052
  Victor A. Santos Dionizio - 2020101250
  Vinicius Silva de Oliveira - 2020101398
  Bruno Sanches - 2015102356
*/

int main(void)
{
    printf("------------------------------------------------------\n");
    printf("\t\t\tFila\n\tpara encerrar insercao digite -1\n");
    printf("------------------------------------------------------\n\n");

    TipoFila *fila = (TipoFila *)malloc(sizeof(TipoFila));
    CriaFilaVazia(fila);

    TipoItem item;
    const int encerra_insercao = -1;
    while (item.chave != encerra_insercao) {
        printf("Insira o elemento da fila: "); scanf("%d", &item.chave);

        if (item.chave != encerra_insercao) {
            InsereFila(fila, item);
        }
    }

    if(!TestaFilaVazia(fila)) {
        printf("\nFila Digitada: ");
        ImprimeFila(fila);
    } else {
        printf("\nFila Digitada: VAZIO");
    }

    printf("\n\n");

    if(!TestaFilaVazia(fila)) {
        TipoFila *copiaFila = (TipoFila *)malloc(sizeof(TipoFila));
        CriaFilaVazia(copiaFila);    

        CopiaValoresFila(fila, copiaFila);
        
        printf("\tFoi criado uma copia da fila\n\nFila Original: ");
        ImprimeFila(fila);
        printf("\nFila Copia: ");
        ImprimeFila(copiaFila);

        free(copiaFila);
    } else {
        printf("A Fila esta vazia! Nao e possivel realizar uma copia dela.");
    }

    free(fila);

    return 0;
}
