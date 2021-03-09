#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	TypeList *list = (TypeList *)malloc(sizeof(TypeList));
	createList(list);
	
	printf("** INSIRA ELEMENTOS NA LISTA **\n\tpara encerrar insecao digite -1\n\n");
	
	TypeItem number;	
	while (number.key != -1) {		
		printf("Insira o elemento: "); scanf("%d", &number.key);		
		
		if (number.key != -1) {
			insertNumber(list, number);
		}
	}

	printList(list);
	printListLength(list);
		
	return 0;
}
