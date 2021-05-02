#include <stdio.h>
#include <stdbool.h>

bool isSorted(int A[], int n) {
	for (int i=0; i<n-1; i++) {
		if (A[i] > A[i+1]) return false;
	}
	return true;
}

int main() {
	
	int n;
	int A[100];
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	printf(isSorted(A,n) ? "true\n" : "false\n");

	return 0;
}
