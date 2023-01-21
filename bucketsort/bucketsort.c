#include "bucketsort.h"

Item* ConcatenaN(Item** v, size_t v_size){
	Item* head = ListCreateEmpty();
	Item* last = ListCreateEmpty();
	for (int i = 0; i < v_size; i++)
	{
		if (!ListIsEmpty(v[i])) {
			if (ListIsEmpty(head)) {
				head = v[i];

			}
			else
			{
				last->next = v[i];
			}
			while (!ListIsEmpty(ListGetTail(v[i]))) {
				v[i] = ListGetTail(v[i]);
			}
			last = v[i];
		}
	}
	return head;
}


void MinMax(const Item* i, int* min, int* max, int* size) {

	*min = INT_MAX;
	*max = INT_MIN;
	*size = 0;
	for (const Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		int val = ListGetHeadValue(tmp);
		if (val > *max) {

			*max = val;
		}
		if (val < *min)
		{
			*min = val;
		}
		(*size)++;

	}
}

Item* BucketSort(Item* i) {
	int min, max, n;
	MinMax(i, &min, &max, &n);
	if (n < 1 || min == max) {
		return i;
	}//caso base
	Item** v = calloc(n, sizeof(Item*));
	for (const Item* tmp = i; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
		int e = *ListGetHeadValue(tmp);
		int index = (n - 1) * (e - min) / (max - min);
		v[index] = ListInsertBack(v[index], &e);


	}
	ListDelete(i);
	for (int j = 0; j < n; j++) {

		v[j] = BucketSort(v[j]);
	}
	Item* ord = ConcatenaN(v, n);
	free(v);
	return ord;



}