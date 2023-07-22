#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "minheap.h"


void HeapMinMoveDownRec(Heap* h, int i) {

	if (i > ((int)h->size - 1) / 2)return;
	size_t lx = HeapLeft(i);
	size_t dx = HeapRight(i);
	int piccolo = i;

	if (lx < h->size && ElemCompare(HeapGetNodeValue(h, lx), HeapGetNodeValue(h, piccolo)) < 0) {
		piccolo = lx;
	}
	if (dx < h->size && ElemCompare(HeapGetNodeValue(h, dx), HeapGetNodeValue(h, piccolo)) < 0) {
		piccolo = dx;
	}

	if (piccolo != i) {
		ElemSwap(HeapGetNodeValue(h, i), HeapGetNodeValue(h, piccolo));
		HeapMinMoveDownRec(h, piccolo);
	}
}