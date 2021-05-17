#include <stdio.h>
#include <stdbool.h>

int maxprofit(int A[], int n) {
	// simple O(n^2) algorithm
	int mp = 0;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (A[j] - A[i] > mp) mp = A[j] - A[i];
		}
	}
	return mp;
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	
	printf("%d\n", maxprofit(A, n));

	return 0;
}
