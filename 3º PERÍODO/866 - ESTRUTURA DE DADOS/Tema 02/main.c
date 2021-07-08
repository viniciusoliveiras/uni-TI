#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_seq.h"

/*
            COOP-ALUNOS
  Mateus Santos de Azevedo - 2020100086
  Rhuan Gonzaga Cunha Francisco - 2020100052
  Victor A. Santos Dionizio - 2020101250
  Vinicius Silva de Oliveira - 2020101398
  Bruno Sanches - 2015102356
*/

int main(void) {
  TipoLista *lista = (TipoLista *)malloc(sizeof(TipoLista));

  CriaListaVazia(lista);
  if(TestaListaVazia(lista) == 1) {
    printf("LIST CREATED\n\n");
  }

  TipoItem e01, e02, e03, e04, e05, e06, e07, e08, e09, e10;
  printf("Insert a number: ");
  scanf("%d", &e01.chave);
  printf("Insert a number: ");
  scanf("%d", &e02.chave);
  printf("Insert a number: ");
  scanf("%d", &e03.chave);
  printf("Insert a number: ");
  scanf("%d", &e04.chave);
  printf("Insert a number: ");
  scanf("%d", &e05.chave);
  printf("Insert a number: ");
  scanf("%d", &e06.chave);
  printf("Insert a number: ");
  scanf("%d", &e07.chave);
  printf("Insert a number: ");
  scanf("%d", &e08.chave);
  printf("Insert a number: ");
  scanf("%d", &e09.chave);
  printf("Insert a number: ");
  scanf("%d", &e10.chave);

  InsereLista(lista, e01);
  InsereLista(lista, e02);
  InsereLista(lista, e03);
  InsereLista(lista, e04);
  InsereLista(lista, e05);
  InsereLista(lista, e06);
  InsereLista(lista, e07);
  InsereLista(lista, e08);
  InsereLista(lista, e09);
  InsereLista(lista, e10);

  if(TestaListaVazia(lista) == 1) {
    printf("%i\n", TestaListaVazia(lista));
  }

  printf("\nLIST: ");
  ImprimeLista(lista);
  printf("\n\n");

  int num = 0;
  printf("Insert a number to remove: ");
  scanf("%d", &num);
  remove_lista_num(lista, num);

  if(TestaListaVazia(lista) == 1) {
    printf("%i\n", TestaListaVazia(lista));
  }

  printf("\nLIST UPDATED: ");
  ImprimeLista(lista);
  printf("\n\n");

  return 0;
}
