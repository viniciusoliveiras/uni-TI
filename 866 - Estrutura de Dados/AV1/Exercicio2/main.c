#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "TADs_pilha_fila_aloc_enc.h"

TipoFila * le_expressao(char *exp)
{
    TipoFila * expressao = (TipoFila *)malloc(sizeof(TipoFila));
    TipoItem caracter;
    CriaFilaVazia(expressao);

    const int tamanhoExpressao = strlen(exp);
    int i;
    for (i = 0; i < tamanhoExpressao; i++)
    {
        if (exp[i] == ' ' || exp[i] == '\0')
            continue;
        caracter.valor = exp[i];
        InsereFila(expressao, caracter);
    }

    return expressao;
}

int main()
{
    char elemento[30];
    int i;
    gets(elemento);
    
    for (i = 0; i < (int)sizeof(elemento); i++)
        elemento[i] = toupper(elemento[i]);
    
    ImprimeFila(le_expressao(elemento));

    printf("\n\nFora da Funcao:%s", elemento);
}
