#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	int head = 1;
	int B[n];
	B[0] = A[0];

	for (int i=1; i<n; i++) {
		// since array is sorted, we can be sure that the duplicate (if any) would be 
		// at the top of the stack.
		if (B[head-1] != A[i]) {
			B[head] = A[i];
			head++;
		}
	}

	printf("%d\n", head);
	for (int i=0; i<head; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	return 0;
}
