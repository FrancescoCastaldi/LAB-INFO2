#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "elemtype.h"
#include "tree.h"


Node* BstInsert(const ElemType* e, Node* n) {
	if (TreeIsEmpty(n))return TreeCreateRoot(e, NULL, NULL); //caso base
	bool sx = false;
	Node* app = n;
	while (!TreeIsEmpty(app)) {
		if (ElemCompare(e, &app->value )<= 0) {
			sx = true;
			if (app->left == NULL)break;
			app = TreeLeft(app);

		}
		if (ElemCompare(e, &app->value) >= 0) {
			sx = false;
			if (app->right == NULL)break;
			app = TreeRight(app);

		}

	}
	if (sx) {
		app->left = TreeCreateRoot(e, NULL, NULL);
	}
	else {
		app->right = TreeCreateRoot(e, NULL, NULL);
	}

	return n;

}
Node* BstInsertRec(const ElemType* e, Node* n) {
	if (TreeIsEmpty(n))return TreeCreateRoot(e, NULL, NULL); //caso base

	if (ElemCompare(e,TreeGetRootValue(n))<=0) {
		n->left = BstInsertRec(e, TreeLeft(n));


	}
	else {
		n->right = BstInsertRec(e, TreeRight(n));

	}



	return n;
}