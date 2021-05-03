#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int A[100];
	int B[100];
	int n;
	scanf("%d", &n);
	n = n<100 ? n : 100;

	memset(A, 0, sizeof(A));
	memset(B, 0, sizeof(B));
	int temp;
	for (int i=0; i<n; i++) {
		scanf("%d", &temp);
		A[temp]++;
	}

	bool uocc = true;
	for (int i=0; i<n; i++) {
		if (A[i] >= 1) B[A[i]]++;
		if (B[A[i]] > 1) {
			uocc = false;
			break;
		}
	}

	printf(uocc?"true\n":"false\n");

	return 0;
}
