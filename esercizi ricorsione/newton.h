#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdint.h>
#include <cfloat>

typedef struct {

	int* coeffs;
	size_t size;
}Polinomio;

extern double newton(const Polinomio* p, const Polinomio* d, double xn, double t, int max_iter);
