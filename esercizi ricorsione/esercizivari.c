#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <cfloat>
/*
static double fattorialerec(int n)
{
	if (n == 0)return 1;

	return n * fattorialerec(n - 1);


}
double fattoriale(int n)
{
	if (n < 0)return -1;
	return fattorialerec(n);


}
*/
/*
static double binomialerec(unsigned int n, unsigned int k)
{
	if (k == 0 || k == n)return 1;

	return binomialerec(n - 1, k - 1) + binomialerec(n - 1, k);



}
double binomiale(unsigned int n, unsigned int k)
{
	if (n == 0 || k > n)return -1;
	return binomialerec(n, k);

}
*/
/*
static int fibonaccirec(int n)
{
	if (n == 0 || n == 1)return n;

	return fibonaccirec(n-1) + fibonaccirec(n-2);
}
int fibonacci(int n)
{
	if (n<0)return -1;
	return fibonaccirec(n);

}
*/
/*
extern double senrec(double x, int i, int n)
{
	if (n > i)return 0;

	double cur_val = pow(-1, n) / tgamma(2 * n + 1) * pow(x, 2 * n + 1);

	return cur_val + senrec(x, i, n + 1);



	
}
double sen(double x, int i)
{
	if (i < 0)return DBL_MIN;



	return senrec(x,i,0);
}
*/

