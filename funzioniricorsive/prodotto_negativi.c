#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>


static int ProdottoNegativiRec(int tmp, int a, int b)
{
	if (b == 0)return 0;

	return tmp + ProdottoNegativiRec(tmp, a, b - 1);

}
int ProdottoNegativi(int a, int b)
{
	int tmp= fabs(a);
		if (a < 0 && b < 0)
		{
			b = fabs(b);
			a = fabs(a);
			return ProdottoNegativiRec(tmp,a, b);

		}
		if (a < 0)
		{
			b = fabs(b);
			a = fabs(a);
			return -ProdottoNegativiRec(tmp, a, b);

		}

		if (b < 0)
		{
			b = fabs(b);
			return -ProdottoNegativiRec(tmp, a, b);

		}
		return ProdottoNegativiRec(tmp, a, b);
}
/*
int main(void)
{
	int a = 2; int b = 0;
	int prodneg = ProdottoNegativi(a, b);

	return 0;
}
*/