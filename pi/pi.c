#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double pi(int n) {

	if (n == 0)return 4;
	return(4.0 * pow(-1,n) )/ (2 * (double)n + 1) + pi(n - 1);

}



int main(int argc, char** argv) {

	if (argc != 2)return 1;
	int ris =atoi(argv[1]);
	if (ris < 0)return 1;
	printf("%lf", pi(ris));
	return 0;
}