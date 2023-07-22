#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "elemtype.h"
#include "minheap.h"
extern void HeapMinMoveUpRec(Heap* h, int i);
extern void HeapMinMoveDownRec(Heap* h, int i);
extern bool HeapMinPop(Heap* h, ElemType* e);
extern void HeapMinHeapsort(Heap* h);
int main(void) {
	ElemType v[] = { 0,12,4,21,2,18,77,8,9 };
	size_t v_size = sizeof(v) / sizeof(ElemType);
	Heap* h = HeapMinMoveUpRec(h, 2);
	Heap* d = HeapMinMoveDownRec(d, 2);
	Heap* a = HeapMinPop(a, v+2);
	HeapDelete(h);
	HeapDelete(d);
	HeapDelete(a);


}