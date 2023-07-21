#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "tree.h"

bool verifico(const Node* t1, const Node* t2) {
	if (t1 == NULL && t2 == NULL)return true;
	if (t1 == NULL || t2 == NULL)return false;
	return (ElemCompare(TreeGetRootValue(t1), TreeGetRootValue(t2)) == 0 && (verifico(TreeLeft(t1), TreeRight(t2)) && verifico(TreeRight(t1), TreeLeft(t2))));

}

bool TreeIsMirror(const Node* t) {

	return verifico(TreeLeft(t), TreeRight(t));


}