#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>
static unsigned long long FattorialeRec(int n)
{
	if (n == 1)return n;
	return n* FattorialeRec(n - 1);
}

unsigned long long Fattoriale(int n)
{
	if (n == 0)return 1;
	if (n < 0)return 0;
	return FattorialeRec(n);

}
/*
int main(void)
{
	unsigned long long a;
	a = Fattoriale(3);


	return 0;


}
*/