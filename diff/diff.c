#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "list.h"


Item* Diff(const Item* i1, const Item* i2) {
	if (i1 == NULL)return ListCreateEmpty();
	if (i2 == NULL)return i1;
	
	Item* ris = ListCreateEmpty();


	for (; !ListIsEmpty(i1); i1 = ListGetTail(i1)) {
		bool test = true;
		for (const Item* tmp2=i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)){
			if (ElemCompare(ListGetHeadValue(i1), ListGetHeadValue(tmp2)) ==0) {
				test = false;
			}
		
		}
		if (test) {
			ris = ListInsertBack(ris, ListGetHeadValue(i1));
		}
	}
	return ris;

}