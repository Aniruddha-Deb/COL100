#include <stdio.h>

int main() {
	
	int x;
	scanf("%d", &x);
	int A[x];
	// following code assumes that largest and smallest element are unique
	// otherwise, first occurences of largest and smallest elements are 
	// considered
	int si=0, li=0;
	for (int i=0; i<x; i++) {
		scanf("%d", &A[i]);
		if (A[si] > A[i]) si = i;
		if (A[li] < A[i]) li = i;
	}
	int temp = A[si];
	A[si] = A[li];
	A[li] = temp;

	for (int i=0; i<x; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}
