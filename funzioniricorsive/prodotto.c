#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>

static int ProdottoRec(int a, int b) {
	if (b == 0)return 0;
	return ProdottoRec(a, b - 1) + a;


}


int Prodotto(int a, int b)
{
	if (a < 0 || b < 0)return -1;

	return ProdottoRec(a, b);


}

/*
int main(void)
{
	int a = 3; int b = 2;
	int prod = Prodotto(a, b);
	return 0;
}
*/