#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool power(int ris) {

	if (ris == 1)return true;
	if (ris <= 0 || ris % 4 != 0)return false;
	return power(ris / 4);
}


int main(int argc, char** argv)
{
	if (argc != 2)return 1;

	int ris = atoi(argv[1]);
	if (power(ris)) 
	{
		int a = 0;
		int c = 1;
		while(c<ris){
			c *= 4;
			a++;
		}
		printf("4^%d = %d",a, ris);
	}
	else {
		printf("!p4");
	}
	return 0;
}
