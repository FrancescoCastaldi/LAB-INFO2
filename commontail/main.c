#include "commontail.h"


int main(void)
{
	ElemType v[] = { 0,1,2,3,4,5,6,7,8,9 };
	Item* i1 = ListInsertHead(&v[7], ListInsertHead(&v[2], ListInsertHead(&v[5], ListInsertHead(&v[4], NULL))));
	Item* i2 = ListInsertHead(&v[8], ListInsertHead(&v[3], ListInsertHead(&v[5], ListInsertHead(&v[4], NULL))));
	const Item* common = CommonTail(i1, i2);
	ListDelete(i1);
	ListDelete(i2);
	return 0;
}