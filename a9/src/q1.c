#include <stdio.h>
#include <stdbool.h>

int findElement(int A[], int n) {
	// O(n) algorithm
	int lsum[100], rsum[100];
	for (int i=0; i<n; i++) {
		if (i > 0) {
			lsum[i] = lsum[i-1] + A[i];
			rsum[n-1-i] = rsum[n-i] + A[n-1-i];
		}
		else {
			lsum[i] = A[i];
			rsum[n-1-i] = A[n-1-i];
		}
	}
	for (int i=0; i<n; i++) {
		if (lsum[i] == rsum[i]) return 1;
	}
	return 0;
}

int main() {
	
	int A[100];
	int n;
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	printf("%d\n", findElement(A, n));

	return 0;
}
