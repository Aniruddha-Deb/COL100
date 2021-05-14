#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPangram(char *s) {
	int f[26];
	memset(f, 0, sizeof(f));
	for (int i=0; i<strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') f[s[i]-'a']++;
	}
	for (int i=0; i<26; i++) {
		if (f[i] < 1) return false;
	}
	return true;
}

int main() {
	
	char s[100];
	scanf("%99[^\n]s",s);

	printf(isPangram(s) ? "true\n" : "false\n");

	return 0;
}
