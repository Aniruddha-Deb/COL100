// multiply two arbitrarily large numbers together
// taken from Purushottam Kar's ESC101 course
#include <stdio.h>

int len(char* s) {
	int l=0;
	while(s[l++]);
	return l;
}

char* bigmul(char* n1, char* n2) {
	
