#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

int main(void)
{
    printf("--------\n");
    printf("  Fila\n");
    printf("--------\n");

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

    printf("\nFila Digitada: ");
    ImprimeFila(fila);
    printf("\n\n");

    TipoFila *copiaFila = (TipoFila *)malloc(sizeof(TipoFila));
    CriaFilaVazia(copiaFila);    

    CopiaValoresFila(fila, copiaFila);
    
    printf("Fila Original: ");
    ImprimeFila(fila);
    printf("\nFila Copia: ");
    ImprimeFila(copiaFila);

    return 0;
}
