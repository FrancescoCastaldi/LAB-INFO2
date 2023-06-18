#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static void backrec(int n, int s, int i, bool * vcurr,int scurr,int*nsol) {
	if (scurr==s) {
		(*nsol)++;
		//caso base
		printf("{ ");
		for (int j = 1; j <=n ; j++) {
			if (vcurr[j]) {
				printf("%d ", j);
			}
		}
		printf("}, ");
		return;
	}
	if (i > n)return;

	for (int intero = i; intero <= n; intero++) {
		if (scurr + intero <= s) {
			vcurr[intero] = true;
			backrec(n, s, intero + 1, vcurr, scurr + intero, nsol);
			vcurr[intero] = false;
		}
	}



}

int backstrmod(int n, int s) {
	if (s <= 0 || n<=0 ) {
		return 0;
	}
	bool* vcurr = calloc(n+1,sizeof(bool));
	int nsol = 0;
	backrec(n, s,1,vcurr,0,&nsol);
	free(vcurr);
	return nsol;

}


int main(void) {
	int a = backstrmod(3,5);
	return 0;

}