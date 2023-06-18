#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
static void backrec(int n, int i, char* vcurr) {
	if (i == n) {
		printf("{ ");
		for (int j = 0; j < n; j++) {
			printf("%c", vcurr[j]);
		}
		printf(" }, ");
		return;
	}
	for (char c = 'a'; c < 'a' + n; c++) {
		vcurr[i] = c;
		backrec(n, i + 1, vcurr);
	}

}
void Backtrackstr(int n) {
	if (n <= 0 && n < 26) {
		return;
	}
	char* vcurr = malloc(n);
	backrec(n, 0, vcurr);
	free(vcurr);

}


int main(void) {
	int lettera = 2;
	Backtrackstr(lettera);
	return 0;


}