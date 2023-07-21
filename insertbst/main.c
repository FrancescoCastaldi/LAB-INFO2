#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "tree.h"

extern Node* BstInsert(const ElemType* e, Node* n);
extern Node* BstInsertRec(const ElemType* e, Node* n);
int main(void) {
	ElemType e[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
	//   15
	// 10  21
	//3 12
	//SE VOGLIO AGGIUNGERE, confronto radice con valore ed in base al valore procedo verso denstra o sinistra
	Node* t = TreeCreateRoot(e + 15,
		TreeCreateRoot(e + 10,
			TreeCreateRoot(e + 3, NULL, NULL),
			TreeCreateRoot(e + 12, NULL, NULL)),
		TreeCreateRoot(e + 21, NULL, NULL));

	ElemType val = 19;
	t = BstInsertRec(&val, t);
	t = BstInsert(&val, t);
	return 0;
}