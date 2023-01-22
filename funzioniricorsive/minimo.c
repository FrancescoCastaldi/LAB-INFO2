#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>

static int MinimoRec(const int* v, int v_size,int i, int maggiore)
{
	if (i >= v_size)return maggiore;
	if (v[i] < maggiore)
	{
		maggiore = v[i];
	}
	return MinimoRec(v,v_size,i+1,maggiore);

}


int Minimo(const int* v, int v_size)
{
	

	return MinimoRec(v, v_size,0,v[0]);

}

/*
int main(void)
{
	int a[] = {3,4,6,1,2 };
	int dim = sizeof(a) / sizeof(a[0]);
	int m =Minimo(a, dim);

	return 0;
}
*/