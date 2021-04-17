#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "TADs_pilha_fila_aloc_enc.h"

/*
	MATEUS SANTOS DE AZEVEDO = 2020100086
	RHUAN GONZAGA CUNHA FRANCISCO - 2020100052
*/

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

int retornaResultado(int num1, int num2, int op)
{
    int result;
    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Resultado: %d",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %d",result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %d",result);
            break;
        case '/':
            result = num1 / num2;
            printf("Resultado: %d",result);
            break;
    }

    return result;
}

int avalia_expressao(TipoFila *exp)
{
    TipoPilha * pilha = (TipoPilha *)malloc(sizeof(TipoPilha));
    // TipoCelula *aux_item = (TipoCelula *)malloc(sizeof(TipoCelula));
    TipoCelula *aux = exp->frente->proximo;
    TipoItem item;
    CriaPilhaVazia(pilha);
    int valor_digitado;

    while (aux != NULL)
    {
        if (aux->item.valor >= 'A' && aux->item.valor <= 'Z')
        {
            printf("Digite o valor de %c: ", aux->item.valor);
            scanf("%d", &valor_digitado);
            aux->item.valor = valor_digitado;
            InserePilha(pilha, aux->item);
        } else {
            int algarismo1, algarismo2;
            int operador = aux->item.valor;
        	
            // ImprimePilha(pilha);
            algarismo2 = item.valor = pilha->topo->item.valor;
            // RemovePilha(pilha, item.valor);
            // ImprimePilha(pilha);
            algarismo1 = item.valor = pilha->topo->item.valor;
            // RemovePilha(pilha, item.valor);
            // ImprimePilha(pilha);

            int resultado;
            resultado = retornaResultado(algarismo1, algarismo2, operador);
            item.valor = resultado;
            
            // printf("resultado = %d", resultado);
            InserePilha(pilha, item);
        }
        aux = aux->proximo;
    }

    //ImprimePilha(pilha);
}

int main()
{
    char elemento[30];
    int i;

    printf("Insira: ");
    gets(elemento);
    
    for (i = 0; i < strlen(elemento); i++)
        elemento[i] = toupper(elemento[i]);
    
    TipoFila * fila = le_expressao(elemento);
    ImprimeFila(fila);
    printf("\n\n\n");
    avalia_expressao(fila);  

    return 0;
}
