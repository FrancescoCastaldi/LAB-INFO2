#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "tree.h"

const ElemType* BstTreeMin(const Node* n) {
	if (n == NULL)return NULL;
	const Node* app = n;
	while (app->left != NULL) {
		app = app->left;
	}
	return &app->value;

}
void Min(const Node* n, const ElemType** minimo, int livello, int* livello_dx) {
	if (TreeIsEmpty(n))return;

	if (ElemCompare(TreeGetRootValue(n), *minimo) < 0) {
		*minimo = TreeGetRootValue(n);
		*livello_dx = livello;
	}
	if (ElemCompare(TreeGetRootValue(n), *minimo) == 0 && livello > *livello_dx) {
		*minimo = TreeGetRootValue(n);
		*livello_dx = livello;
	}
	
	Min(TreeRight(n), minimo, livello + 1, livello_dx);
	Min(TreeLeft(n), minimo, livello + 1, livello_dx);


}
const ElemType* TreeMin(const Node* n) {


	if (n == NULL)return NULL;
	const ElemType* minimo = TreeGetRootValue(n);
	int livello_dx = 0;
	Min(n, &minimo, 0, &livello_dx);
	return minimo;



}