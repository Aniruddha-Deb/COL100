#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// this is taken from the previous program, for case insensitive matching
char* toLowerCase(char *s) {
	int i=0;
	while (s[i] != '\0') {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += ('a'-'A');
		}
		i++;
	}
	return s;
}

int isSubstring(char *s1, char *s2) {
	int l = strlen(s2);
	int n = strlen(s1);
	int pos = -1;
	for (int i=0; i<n-l+1; i++) {
		pos = i;
		for (int j=i; j<i+l; j++) {
			if (s2[j-i] != s1[j]) {
				pos = -1;
				break;
			}
		}
		if (pos > -1) return pos;
	}
	return -1;
}

int main() {
	
	char s[100];
	fgets(s, 100, stdin);
	char w[100];
	fgets(w, 100, stdin);

	// note fgets also reads a newline character, so we'll chop the last character
	// off the string.
	s[strlen(s)-1] = '\0';
	w[strlen(w)-1] = '\0';

	toLowerCase(s);
	toLowerCase(w);
	printf("%d\n", isSubstring(s,w));

	return 0;
}
