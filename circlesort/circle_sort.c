#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void swap(int* v, size_t a, size_t b)
{
	int s = v[a];
	v[a] = v[b];
	v[b] = s;
	return;
}
void CircleSortRec(int* v, size_t start, size_t stop, bool* continua, size_t v_size)
{
	if (v_size == 1)
		return;

	size_t cpy_start = start;
	size_t cpy_stop = stop;

	while (cpy_start < cpy_stop)
	{
		if (v[cpy_start] > v[cpy_stop])
		{
			swap(v, cpy_start, cpy_stop);
			*continua = true;
		}
		cpy_start++;
		cpy_stop--;
	}
	if (((v_size % 2) == 1) && (v[v_size / 2] > v[(v_size / 2) + 1]))
	{
		swap(v, ((stop + 1) / 2), (((stop + 1) / 2) + 1));
		*continua = true;
	}

	if (v_size % 2 == 0)
	{
		CircleSortRec(v, start, ((stop + start) / 2), continua, v_size / 2);
		CircleSortRec(v, ((stop + start) / 2) + 1, stop, continua, v_size / 2);
	}
	else
	{
		CircleSortRec(v, start, (stop + start) / 2, continua, (v_size + 1) / 2);
		CircleSortRec(v, ((stop + start) / 2) + 1, stop, continua, v_size / 2);
	}
	return;
}

void CircleSort(int* v, size_t v_size)
{
	if (v_size == 0)
		return;

	bool continua = true;
	while (continua)
	{
		continua = false;
		CircleSortRec(v, 0, v_size - 1, &continua, v_size);
	}
}