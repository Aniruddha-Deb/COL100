#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	char A[n+1];
	char temp;
	scanf("%c", &temp); // swallowing the newline character after 5
	for (int i=0; i<n; i++) {
		scanf("%c", &A[i]);
	}
	A[n] = '\0';

	int words = 0;
	int iw = 0;
	for (int i=0; i<n;) {
		while (A[i] != ' ' && A[i] != '\t' && i < n) {
			iw = 1;
			i++;
		}
		if (iw) words++;
		while (A[i] == ' ' || A[i] == '\t' && i < n) {
			iw = 0;
			i++;
		}
	}

	printf("%d\n", words);

	return 0;
}
