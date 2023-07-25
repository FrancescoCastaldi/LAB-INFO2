#include "next_greater.h"


ElemType* NextGreater(const Item* list, size_t* answer_size) {

	if (ListIsEmpty(list)) {
		*answer_size = 0;
		return NULL;
	}
	size_t n = 0;
	const Item* cnt = list;
	while (cnt != NULL) {
		cnt = cnt->next;
		n++;
	}
	ElemType* answer = malloc(sizeof(int) * n);
	const Item* ris = list;
	for (size_t i = 0; i < n; i++) {
		answer[i] = INT_MIN;
		const Item* j = ris->next;
		while (j != NULL) {
			if (j->value >= ris->value) {
				answer[i] = j->value;
				break;
			}
			j = j->next;
		}
		ris = ris->next;


	}


	*answer_size = n;
	return answer;
}