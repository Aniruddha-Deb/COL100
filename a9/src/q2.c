#include <stdio.h>
#include <stdbool.h>

int peakIndex(int A[], int n) {
	int i = n/2;
	while (true) { // works, because the array is guaranteed to be a mountain
		if (i > 0 && i < n-1) {
			if (A[i-1] < A[i] && A[i+1] < A[i]) return i;
			else if (A[i-1] < A[i] && A[i+1] > A[i]) i = (n+i)/2;
			else if (A[i-1] > A[i] && A[i+1] < A[i]) i = i/2;
		}
		// rest of the cases handle edge cases; they probably won't be needed.
		else if (i == 0 && A[i] > A[i+1]) return i;
		else if (i == n-1 && A[i] > A[i-1]) return i;
		else return -1;
	}
}

int main() {
	
	int A[100];
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	printf("%d\n", peakIndex(A,n));

	return 0;
}
