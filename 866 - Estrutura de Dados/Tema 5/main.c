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
    printf("%i\n", TestaFilaVazia(fila));

    TipoItem e31, e32, e33, e34, e35;
    e31.chave = 21;
    e32.chave = 37;
    e33.chave = 95;
    e34.chave = 63;
    e35.chave = 72;

    InsereFila(fila, e31);
    InsereFila(fila, e32);
    InsereFila(fila, e33);
    InsereFila(fila, e34);
    InsereFila(fila, e35);

    printf("%i\n", TestaFilaVazia(fila));

    ImprimeFila(fila);
    printf("\n\n");

    TipoItem e36;

    RemoveFila(fila, &e36);
    printf("%i\n", e36.chave);

    RemoveFila(fila, &e36);
    printf("%i\n", e36.chave);

    RemoveFila(fila, &e36);
    printf("%i\n", e36.chave);

    printf("%i\n\n", TestaFilaVazia(fila));

    ImprimeFila(fila);
    printf("\n\n");

    return 0;
}
