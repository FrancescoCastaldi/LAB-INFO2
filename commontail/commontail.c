#include "commontail.h"


const Item* CommonTail(const Item* i1, const Item* i2) {
	while (i1)
	{
		const Item* tmp = i2;
		while (tmp) {
			if (tmp == i1)
				return i1;
			tmp = tmp->next;
		}
		i1 = i1->next;
	}
	return NULL;
}