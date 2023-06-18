
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void rec(const char* str, int n, char* attuale, int* total, int lvl) {
	if (n == lvl) {
		(*total)++;
		printf("%s\n", attuale);
		return;

	}
	for (int i = 0; i <(int) strlen(str); i++) {
		attuale[lvl] = str[i];
		rec(str, n, attuale, total, lvl + 1);

	}

}


int Password(const char* str, int n) {

	if (str == NULL || n < 1)return 0;
	int total = 0;

	char* attuale = calloc(n + 1, sizeof(char));
	rec(str, n, attuale, &total, 0);
	free(attuale);
	return total;



}