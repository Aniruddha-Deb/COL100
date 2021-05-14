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
	scanf("%99[^\n]s",s);

	printf("%s\n", toLowerCase(s));

	return 0;
}
