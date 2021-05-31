#include <stdio.h>
// Can't do this because of the name clash, oof. Need to write my own strlen
// as a result.
// #include <string.h>
#include <stdbool.h>

// this still gives a warning, saying that strlen is a builtin. 
int strlen(const char *s) {
	int len = 0;
	char c = s[0];
	while (c != '\0') {
		len++;
		c = s[len];
	}
	return len;
}

// this function assumes that dest is long enough to hold src
char* strcat(char *dest, const char *src) {
	int p = strlen(dest);
	int l = strlen(src);
	for (int i=0; i<l; i++) {
		dest[p+i] = src[i];
	}
	dest[p+l] = '\0';
	return dest;
}

int main() {
	
	char s1[100], s2[100];
	scanf("%s %s", s1, s2);

	char* s3 = strcat(s1, s2);
	printf("%s\n", s3);

	return 0;
}
