#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <stdbool.h>
static int FibonacciRec(int n)
{
	if (n == 0)return 0;
	if (n == 1)return 1;
	return FibonacciRec(n - 1) + FibonacciRec(n - 2);
}
int Fibonacci(int n)
{
	if (n < 0)return -1;
	FibonacciRec(n);


}

/*
int main(void)
{
	int a;
	a = Fibonacci(5);

	return 0;
}
*/