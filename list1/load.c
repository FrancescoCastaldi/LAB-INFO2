#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elemtype.h"
#include "list.h"


Item* ListLoad(const char* filename) {
	FILE*f = fopen(filename,"r");
	if (f == NULL)return ListCreateEmpty();
	Item* list = ListCreateEmpty();
	ElemType valore;
	int valido = 0;
	while (!feof(f)) {
		valido = fscanf(f, "%d", &valore);
		if (valido != 1)break;
		list = ListInsertHead(&valore, list);


	}
	fclose(f);
	return list;
	




}