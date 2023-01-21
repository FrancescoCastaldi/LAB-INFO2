#include "count.h"
static void TreeCountNodesRec(const Node* t, int* i, int* e)
{
	if (TreeIsEmpty(t))return;
	if (TreeIsLeaf(t)) {
		(*e)++;
		return;
	}
	(*i)++;
	TreeCountNodes(TreeLeft(t), i, e);
	TreeCountNodes(TreeRight(t), i, e);



}

void TreeCountNodes(const Node* t, int* internal, int* external)
{
	(*internal) = 0;
	(*external) = 0;
	TreeCountNodesRec(t, internal, external);



}