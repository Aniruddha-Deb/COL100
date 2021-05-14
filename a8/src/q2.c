#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	
	int C[101];
	int n;
	scanf("%d", &n);

	// memset makes all elements of C 0
	memset(C,0,101*sizeof(int));
	int temp;
	for (int i=0; i<n; i++) {
		scanf("%d", &temp);
		C[temp]++;
	}

	bool dup_printed = false;
	for (int i=1; i<=n; i++) {
		if (C[i] > 1) {
			dup_printed = true;
			printf("%d ", i);
		}
	}
	if (!dup_printed) printf("No duplicates exist!");
	printf("\n");

	return 0;
}
