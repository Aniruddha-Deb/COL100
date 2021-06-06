#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void list_subsets(int *A, int l, int n) {
	// kind of hacky, but it's the most elegant solution I could think of
	if (n > (int)pow(2,l)) return;
	for (int i=0; i<l; i++) {
		if (n & (1 << i)) printf("%d ", A[i]);
	}
	printf("\n");
	list_subsets(A, l, n+1);
}

int main() {
	int A[100];
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d", &A[i]);
	list_subsets(A, n, 0);
	return 0;
}
