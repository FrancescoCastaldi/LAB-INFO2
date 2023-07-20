#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elemtype.h"
#include "list.h"

extern Item* IntersectNoRep(const Item* i1, const Item* i2);
extern Item* DiffNoRep(const Item* i1, const Item* i2);


int main(void) {
	ElemType e1[] = { 1, 45, 0, 2, 4, 1, 3 };
	size_t e1_size = sizeof(e1) / sizeof(ElemType);
	Item* list_a = ListCreateEmpty();
	for (size_t i = 0; i < e1_size; i++) {
		list_a = ListInsertBack(list_a, e1 + i);
	}
	ElemType e2[] = { 7, 45, 3, 2, 5 };
	size_t e2_size = sizeof(e2) / sizeof(ElemType);
	Item* list_b = ListCreateEmpty();
	for (size_t i = 0; i < e2_size; i++) {
		list_b = ListInsertBack(list_b, e2 + i);
	}
	Item* ris = Diff(list_a, list_b);
	ListDelete(ris);
	ListDelete(list_a);
	ListDelete(list_b);
	return 0;


}