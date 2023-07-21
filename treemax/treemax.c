#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "tree.h"

const ElemType* BstTreeMax(const Node* n) {
	if (n == NULL)return NULL;
	const Node* appoggio = n;
	while (appoggio->right != NULL) {
		appoggio = appoggio->right;
	}
	return &appoggio->value;


}
extern void TrovaMassimo(const Node* n,const ElemType**massimo,int livello,int*livello_massimo) {

	if (TreeIsEmpty(n))return;
	if (ElemCompare(TreeGetRootValue(n), *massimo) > 0) {
		*massimo = TreeGetRootValue(n);
		*livello_massimo = livello;
	}
	if (ElemCompare(TreeGetRootValue(n), *massimo) == 0 && livello<*livello_massimo) {
		*massimo = TreeGetRootValue(n);
		*livello_massimo = livello;
	}

	TrovaMassimo(TreeLeft(n), massimo, livello + 1, livello_massimo);
	TrovaMassimo(TreeRight(n), massimo, livello + 1, livello_massimo);



}
const ElemType* TreeMax(const Node* n) {
	if (n == NULL)return NULL;
	const ElemType* max = TreeGetRootValue(n);
	int livello_max = 0;
	TrovaMassimo(n, &max, 0,&livello_max);
	return max;


}