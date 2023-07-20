#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elemtype.h"
#include "list.h"

Item* Intersect(const Item* i1, const Item* i2) {

	if (i1 == NULL || i2 == NULL) return ListCreateEmpty();
	Item* nuova = ListCreateEmpty();

	if (Item* tmp1 = i1; !ListIsEmpty(tmp1); tmp1 = ListGetTail(tmp1)) {
		if (Item* tmp2 = i2; !ListIsEmpty(tmp2); tmp2 = ListGetTail(tmp2)) {
			if ()


		}

	}




}
