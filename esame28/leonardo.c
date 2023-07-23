#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int Leonardo(int n) {

	if (n == 0 || n == 1) return 1;
	return Leonardo(n - 1) + Leonardo(n - 2) + 1;

}


int main(int argc,char** argv) {
	if (argc != 2)return 1;
	int ris = atoi(argv[1]);
	if (ris < 0)return 1;
	for (int i = 0; i <= ris; i++) {
		printf("%d, ", Leonardo(i));

	}
	return 0;
}