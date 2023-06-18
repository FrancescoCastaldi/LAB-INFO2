#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
void Stampa(int n, int* v_curr, int* nr_sol) {
	if (n == 2) {
		printf("%2d) ", nr_sol);
	}
	if (n == 3) {
		printf("%3d) ", nr_sol);
	}
	if (n == 4) {
		printf("%4d) ", nr_sol);
	}
	for (int i = 0; i < n; i++) {
		printf("%d", v_curr[i]);
	}
	printf("\n");
}
int Conto(int n, int* v_curr, int val) {
	int tot = 0;
	for (int i = 0; i < n; i++) {
		if (v_curr[i] == val) {
			tot++;
		}
	}
	return tot;

}
bool Verifichiamo(int n, int* v_curr) {
	bool valid = false;
	for (int i = 0; i < 10; i++) {
		if (Conto(n, v_curr, i) >= 2) {
			valid = true;
		}


	}


	return valid;
}
void PasswordsRec(int n, int* v_curr, int* nr_sol, int lvl, int last_nr) {
	if (lvl == n) {
		if (Verifichiamo(n, v_curr)) {
			*nr_sol += 1;
			Stampa(n, v_curr, *nr_sol);

		}
		return;	
	}

	for (int i = last_nr; i < 10; i++) {
		v_curr[lvl] = i;
		PasswordsRec(n, v_curr, nr_sol, lvl + 1, i);
		v_curr[lvl] = 0;


	}



}

void Passwords(int n) {
	if (n == 1) {
		return;
	}
	int* v_curr = calloc(n, sizeof(int));
	int nr_sol = 0;
	PasswordsRec(n, v_curr, &nr_sol, 0, 0);
	free(v_curr);
}