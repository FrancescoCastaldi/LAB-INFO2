#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "elemtype.h"
#include "minheap.h"



Heap* HeapMinHeapify(const ElemType* v, size_t v_size) {
	Heap* h = HeapCreateEmpty();
	h->size = v_size;
	h->data = malloc(sizeof(ElemType) * v_size);
	memcpy(h->data, v, v_size * sizeof(ElemType));
	for (int i = ((int)h->size - 1) / 2; i >= 0; i--) {

		HeapMinMoveDown(h, i);

	}
	return h;


}