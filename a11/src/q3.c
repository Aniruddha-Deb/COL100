#include <stdio.h>
#include <stdbool.h>

char* lcp(char** strs, int n, char* dest) {
	
	bool pref = true;
	int i;
	for (i=0; i<10; i++) {
		char c = strs[0][i];
		for (int j=1; j<n; j++) {
			if (strs[j][i] != c) {
				pref = false;
				break;
			}
		}
		if (!pref) break;
		else dest[i] = c;
	}
	if (i == 0) dest = "No common prefix";
	else dest[i] = '\0';
	
	return dest;
}

int main() {
	
	int n;
	scanf("%d\n", &n);

	char strs_static[100][10];
	char *strs[100];
	for (int i=0; i<n; i++) {
		strs[i] = strs_static[i];
		scanf("%s", strs[i]);
	}

	char dest[100];
	printf("%s\n", lcp(strs, n, dest));

	return 0;
}
