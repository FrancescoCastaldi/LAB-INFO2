#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

static void GolaCrestaRec(size_t n, size_t* vcurr, int lvl) {
	if (lvl == n) {
		printf("(");
		for (long unsigned j = 0; j < n; j++) {
			printf("%li", vcurr[j]);
			if (j != n - 1) {
				printf(", ");
			}

		}

		printf("), ");
		return;
	}
	for (size_t k = 0; k <= 2; k++) {
		vcurr[lvl] = k;
		if (lvl == 0) {
			
			GolaCrestaRec(n, vcurr, lvl + 1);
		}
		if (lvl == 1 && (vcurr[0]<vcurr[lvl] || vcurr[0]>vcurr[lvl])) {
			GolaCrestaRec(n, vcurr, lvl + 1);
		}
		bool cresta = vcurr[lvl - 2]<vcurr[lvl - 1] && vcurr[lvl - 1]>vcurr[lvl];
		bool gola = vcurr[lvl - 2]>vcurr[lvl - 1] && vcurr[lvl - 1]<vcurr[lvl];
		if (lvl > 1 && (cresta || gola)) {
			GolaCrestaRec(n, vcurr, lvl + 1);
		}



	}
}

void GolaCresta(size_t n) {
	if (n < 3)return;
	size_t* vcurr = calloc(n, sizeof(size_t));
	GolaCrestaRec(n, vcurr, 0);
	free(vcurr);

}