#include "heapsort.h"

void HeapMinHeapsort(Heap* h) {
	if (!h)return;
	size_t or_size = h->size;
	while (h->size >= 2) {
		ElemSwap(HeapGetNodeValue(h, 0), HeapGetNodeValue(h, h->size - 1));
		h->size--;
		HeapMinMoveDown(h, 0);
	}
	h->size = or_size;




}