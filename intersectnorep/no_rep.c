#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "list.h"
bool IsContenuto(const Item* list, const ElemType* val) {
	for (; !ListIsEmpty(list); list = ListGetTail(list)) {
		if (ElemCompare(ListGetHeadValue(list), val) == 0) {
			return true;
		}
	}
	return false;
}

Item* IntersectNoRep(const Item* i1, const Item* i2) {

	Item* nuova = ListCreateEmpty();

	for (const Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		for (const Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if (ElemCompare(ListGetHeadValue(tmp1), ListGetHeadValue(tmp2)) == 0 && !IsContenuto(nuova,ListGetHeadValue(tmp1)))
			{
				nuova = ListInsertBack(nuova, ListGetHeadValue(tmp1));
				
			}


		}

	}

	return nuova;

}

Item* DiffNoRep(const Item* i1, const Item* i2) {
	Item* ris = ListCreateEmpty();


	for (; !ListIsEmpty(i1); i1 = ListGetTail(i1)) {
		bool test = true;
		for (const Item* tmp2=i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)){
			if (ElemCompare(ListGetHeadValue(i1), ListGetHeadValue(tmp2)) ==0) {
				test = false;
			}
		
		}
		if (test && !IsContenuto(ris,ListGetHeadValue(i1))) {
			ris = ListInsertBack(ris, ListGetHeadValue(i1));
		}
	}
	return ris;

}