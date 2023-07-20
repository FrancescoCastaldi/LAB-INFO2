#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "elemtype.h"
#include "list.h"


int main(void) {
	ElemType e[] = {0,1,2,3,4};
	Item* list = ListCreateEmpty();
	list = ListInsertHead(e + 0, list);
	list = ListInsertHead(e + 1, list);
	list = ListInsertHead(e + 2, list);
	list = ListInsertHead(e + 3, list);
	list = ListInsertHead(e + 4, list);
	Item* tmp = list;//salvo indirizzo testa lista
	while (!ListIsEmpty(tmp)) {
		//cose con tmp
		tmp = ListGetTail(tmp);

	}
	list = ListGetTail(list);//ritorna indirizzo del next della lista, dunque perdo l'indirizzo della lista iniziale

	for (Item* tmp = list; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {


	}



}