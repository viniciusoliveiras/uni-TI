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

  while (aux != NULL) {
    printf("%d ", aux->item.key);
    aux = aux->next;
  }
}

int listLength(TypeList *list) {
  int sizeList = sizeof(list);
  return sizeList;
}

void printListLength(TypeList *list) {
  int sizeList = listLength(list);
  printf("Tamanho da Lista: %d\n", sizeList);
}
