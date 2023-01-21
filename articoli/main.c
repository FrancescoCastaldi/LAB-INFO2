#include "prezzo.h"

int main(void)
{
	struct Articolo a[]={
		{.nome = "Monopoli",.prezzo = 20},
		{.nome = "Napoli",.prezzo = 30},
		{.nome = "Perudo",.prezzo = 20},

	};
	size_t a_size = sizeof(a) / sizeof(struct Articolo);
	TrovaArticoli(a, a_size, 50);
	puts("");

	return 0;
}