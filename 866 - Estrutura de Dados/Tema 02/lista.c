#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_seq.h"

/*
            COOP-ALUNOS
  Mateus Santos de Azevedo - 2020100086
  Rhuan Gonzaga Cunha Francisco - 2020100052
  Victor A. Santos Dionizio - 2020101250
  Vinícius Silva de Oliveira - 2020101398
  Bruno Sanches - 2015102356
*/

//cria uma lista vazia
void CriaListaVazia(TipoLista *lista) {
  lista->primeiro = -1;
  lista->ultimo = lista->primeiro;
}

//testa se a lista � vazia
int TestaListaVazia(TipoLista *lista) {
  return ((lista->primeiro == -1) && (lista->ultimo == -1));
}

//insere um elemento na lista
void InsereLista(TipoLista *lista, TipoItem item) {
  if (lista->ultimo == TAM - 1)
    printf("Erro: lista cheia\n");
  else {
    lista->ultimo++;
    lista->itens[lista->ultimo] = item;
    if (lista->primeiro == -1)
      lista->primeiro = 0;
  }
}

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista) {
  int aux;

  if (TestaListaVazia(lista))
    printf("Erro: lista vazia\n");
  else
    for (aux = lista -> primeiro; aux <= lista -> ultimo; aux++)
      printf("%i ", lista->itens[aux].chave);
}

int quantos_iguais(TipoLista *lista, int aux, int ultimo, int numero)
{
  int quantidade_repetido = 0;

  for(int i = 0; i <= ultimo; i++)
  {
    if (lista->itens[aux].chave == lista->itens[i].chave && lista->itens[i].chave == numero)
      quantidade_repetido += 1;
  }

  return quantidade_repetido;
}

//remove numero inserido pelo user
void remove_lista_num(TipoLista *lista, int num) {
  if(TestaListaVazia(lista))
    printf("Error: empty list\n");

  // START-DOWHILE
  int repete = 0;
  int desvio = 0;

  do
  {
    int aux = 0;

    while(aux <= lista->ultimo && lista->itens[aux].chave != num)
    {
      aux++;
    }

    // printf("\n\n ---------- ultimo: %d -------------\n\n", lista->ultimo);
    repete = quantos_iguais(lista, aux, lista->ultimo, num);

    for(int i = aux; i < lista->ultimo; i++)
      lista->itens[i] = lista->itens[i+1];

     if (desvio == 1) {
        lista->ultimo--;
     } else {
        desvio = 1;
     }

  } while(repete != 0);
  // END-DOWHILE
}
