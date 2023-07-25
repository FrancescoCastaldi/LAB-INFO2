#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "tree.h"



Node* Invert(Node* t) {
	if (TreeIsEmpty(t))return TreeCreateEmpty();
	Node* tmp = t->left;
	t->left = t->right;
	t->right = tmp;
	Invert(t->left);
	Invert(t->right);
	return t;





}