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
	scanf("%99[^\n]s",s);
	fflush(stdin); // the \n will still be in stdin, causing w to be empty
	// to prevent this, flush the input stream.
	char w[100];
	scanf("%99[^\n]s",w);

	toLowerCase(s);
	toLowerCase(w);
	printf("%d\n", isSubstring(s,w));

	return 0;
}
