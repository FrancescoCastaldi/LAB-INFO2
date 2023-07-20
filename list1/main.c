#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elemtype.h"
#include "list.h"



extern Item* ListLoad(const char* filename);
extern Item* Intersect(const Item* i1, const Item* i2);
int main(void) {
	Item* list = ListLoad("data_00.txt");
	ListWriteStdout(list);
	return 0;
}