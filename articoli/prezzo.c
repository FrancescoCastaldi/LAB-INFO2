#include "prezzo.h"
static void TrovaArticoloRec(const struct Articolo* a, size_t a_size, int sum, bool* vcurr, int i, int scurr, int* ncall) {
	(*ncall)++;

	//caso base
	if (scurr == sum)
	{
		for (int j = 0; j < i; j++)
		{
			if (vcurr[j])
				printf("%s, ", a[j].nome);
		}
		printf("\n");
		return;
	}
	TrovaArticoloRec(a, a_size, sum, vcurr, i + 1, scurr, ncall);
	if (scurr + a[i].prezzo <= sum)
	{
		scurr += a[i].prezzo;
		vcurr[i] = true;
		TrovaArticoloRec(a, a_size, sum, vcurr, i + 1, scurr, ncall);
		vcurr[i] = false;


	}



}
void TrovaArticoli(const struct Articolo* a, size_t a_size, int sum)
{
	//caso particolare
	if (a == NULL || a_size == 0) {
		return;
	}
	int ncall = 0;
	bool* vcurr = calloc(a_size, sizeof(bool));
	TrovaArticoloRec(a, a_size, sum, vcurr, 0, 0, &ncall);

	free(vcurr);
}