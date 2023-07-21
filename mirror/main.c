#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "tree.h"
extern bool TreeIsMirror(const Node* t);
int main(void) {
	ElemType e[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
	//   15
	// 10  21
	// 12
	//SE VOGLIO AGGIUNGERE, confronto radice con valore ed in base al valore procedo verso denstra o sinistra
	Node* t = TreeCreateRoot(e + 15,
		TreeCreateRoot(e + 11,
			TreeCreateRoot(e + 8,
				TreeCreateRoot(e + 7,
					TreeCreateRoot(e + 5, NULL, NULL),
					NULL),
				TreeCreateRoot(e + 13,
					TreeCreateRoot(e + 2, NULL, NULL),
					TreeCreateRoot(e + 10, NULL, NULL))
			),
			TreeCreateRoot(e + 12, NULL, NULL)
		),
		TreeCreateRoot(e + 21, NULL, NULL));

	ElemType a = 8;
	Node* ris = TreeIsMirror(t);
	return 0;
}