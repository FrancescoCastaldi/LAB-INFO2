#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "minheap.h"


bool HeapMinPop(Heap* h, ElemType* e) {

	if (HeapIsEmpty(h) || e == NULL)return false;

	*e = ElemCopy(h->data);
	h->data[0] = h->data[h->size - 1];
	h->size -= 1;
	h->data = realloc(h->data, h->size * sizeof(ElemType));
	HeapMinMoveDown(h, 0);
	return true;


}