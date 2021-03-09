#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

/*
** FUNCOES EXPORTADAS
*/

// create empty list
void createList(TypeList *list) {
  list->first = (TypeCell *)malloc(sizeof(TypeCell));
  list->last = list->first;
  list->first->next = NULL;
}

int checkEmptyList(TypeList *list) {
  return (list->first == list->last);
}

void insertNumber(TypeList *list, TypeItem item) {
  list->last->next = (TypeCell *)malloc(sizeof(TypeCell));
  list->last = list->last->next;
  list->last->item = item;
  list->last->next = NULL;
}

void printList(TypeList *list) {
  TypeCell *aux = list->first->next;

  printf("\nLista impressa: \n");
  while (aux != NULL) {
    printf("%d ", aux->item.key);
    aux = aux->next;
  } 

  printf("\n\n");
}

int listLength(List *list) {
  if (list == NULL) return 0;

  int count = 0;
  TypeCell *knot = *list;
  
  while(knot != NULL) {
    count += 1;
    knot = knot->next;
  }

  count -= 1; // because element -1 is also counted

  return count;
}

void printListLength(List *list) {
  int sizeList = listLength(list);
  printf("Tamanho da Lista:\n%d\n", sizeList);
}

void releasedList(List *list) {
  if (list != NULL) {
    TypeCell *knot;

    while((*list) != NULL) {
      knot = *list;
      *list = (*list)->next;
      free(knot);
    }

    free(list);
  }
}