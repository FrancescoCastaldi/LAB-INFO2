#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "minheap.h"


void HeapMinMoveUpRec(Heap* h, int i){

	if (i != 0 && ElemCompare(HeapGetNodeValue(h, i), HeapGetNodeValue(h, HeapParent(i))) < 0) {
		ElemSwap(HeapGetNodeValue(h,i),HeapGetNodeValue(h,HeapParent(i)));
		HeapMinMoveUpRec(h, HeapParent(i));
	}
	

}