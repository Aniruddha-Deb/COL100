#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char* toLowerCase(char *s) {
	// note this function does not make a copy of s: the value of s is changed.
	int i=0;
	while (s[i] != '\0') {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += ('a'-'A');
		}
		i++;
	}
	return s;
}

int main() {
	
	char s[100];
	// fgets is safer, as scanf can cause an overflow if a string > 100 characters
	// long is entered
	fgets(s, 100, stdin);

	printf("%s", toLowerCase(s));

	return 0;
}
