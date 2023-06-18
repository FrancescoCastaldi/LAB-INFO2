#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
int BoolToH(bool* time, bool verifica) {
	int n = 0;
	int potenza = 1;
	if (verifica) {
		for (int i = 4; i > -1; i--) {
			n += potenza * time[i];
			potenza *= 2;
		}
		return n;
	}else
	{
		for (int i = 10; i > 4; i--) {
			n += potenza * time[i];
			potenza *= 2;
		}
		return n;
	}
	
}

bool valido(int h, int m) {
	return (h >= 0) && (h <= 23) && (m >= 0) && (m <= 59);
}

extern void ValidTimesRec(uint8_t n, bool* time, int curr_leds, int lvl) {
	//trasformazione in bool to h e bool to m

	int h = BoolToH(time, true);
	int m = BoolToH(time, false);
	if (!valido(h, m) || lvl>=12) {
		return;
	}
	if ((int)n == curr_leds) {

		printf("%02d:%02d, ", h, m);
		return;
	}
	
	
	
	
	time[lvl] = true;
	ValidTimesRec(n, time, curr_leds + 1, lvl + 1);
	time[lvl] = false;
	ValidTimesRec(n, time, curr_leds, lvl + 1);
}
// 16 8 4 2 1 , 32 16 8 4 2 1
//Time xxxxx:xxxxxx
void ValidTimes(uint8_t n) {
	bool* time = calloc(12, sizeof(bool));
	ValidTimesRec(n, time, 0, 0);
	free(time);
}