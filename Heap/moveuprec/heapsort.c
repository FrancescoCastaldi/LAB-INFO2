#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "elemtype.h"
#include "minheap.h"




void HeapMinHeapsort(Heap* h) {
	if (!h)return;
	size_t origine = h->size;
	while (h->size >= 2) {
		ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size - 1));
		h->size--;
		HeapMinMoveDown(h, 0);
	}
	h->size = origine;


}