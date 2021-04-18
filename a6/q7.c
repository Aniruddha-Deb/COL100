#include <stdio.h>

int main() {
	
	int x;
	scanf("%d", &x);
	int A[x], B[x];
	for (int i=0; i<x; i++) {
		scanf("%d", &A[i]);
	}
	int t;
	scanf("%d", &t);

	for (int i=0; i<x; i++) {
		B[(i+t)%x] = A[i];
	}

	for (int i=0; i<x; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");

	return 0;
}
