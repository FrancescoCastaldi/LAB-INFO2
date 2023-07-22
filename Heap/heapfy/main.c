#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "elemtype.h"
#include "minheap.h"
extern Heap* HeapMinHeapify(const ElemType* v, size_t v_size);
int main(void) {
	ElemType v[] = { 0,12,4,21,2,18,77,8,9 };
	size_t v_size = sizeof(v) / sizeof(ElemType);
	Heap* h = HeapMinHeapify(v, v_size);
	HeapDelete(h);


}