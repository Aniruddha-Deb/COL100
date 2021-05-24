#include <stdio.h>
#include <stdbool.h>

int min_idxs[2];

void min2(int *A, int n) {

	int min_idx = min_idxs[0];
	int min2_idx = min_idxs[1];

	if (n == 0) return;

	if (A[min_idx] > A[min2_idx]) {
		int temp = min2_idx;
		min2_idx = min_idx;
		min_idx = temp;
	}

	if (A[n-1] < A[min_idx]) {
		min2_idx = min_idx;
		min_idx = n-1;
	}
	else if (A[n-1] > A[min_idx] && A[n-1] < A[min2_idx]) {
		min2_idx = n-1;
	}

	min_idxs[0] = min_idx;
	min_idxs[1] = min2_idx;

	min2(A,n-1);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	min_idxs[0] = n-1;
	min_idxs[1] = n-2;
	min2(A,n);
	printf("%d %d\n", min_idxs[0], min_idxs[1]);

	return 0;
}
