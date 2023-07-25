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
	if (v_size == 1)return;
	size_t cpystart = start;
	size_t cpystop = stop;
	while (cpystart < cpystop) {
		if (v[cpystart] > v[cpystop]) {
			swap(v, cpystart, cpystop);
			*continua = true;

		}

		cpystart++;
		cpystop--;

	}
	if (v[v_size] % 2 == 1 && v[v_size / 2] > v[v_size / 2] + 1) {
		swap(v, ((1 + stop) / 2), ((1 + stop) / 2) + 1);
		*continua = true;
	}

	if (v_size % 2 == 0) {
		CircleSortRec(v, start, ((stop + start) / 2), continua, v_size / 2);
		CircleSortRec(v, ((start+stop)/2+1), stop, continua, v_size / 2);
	}
	else {
		CircleSortRec(v, start, (stop + start) / 2, continua, ((v_size+1) / 2));
		CircleSortRec(v, ((start + stop) / 2+1), stop, continua,( v_size / 2));

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