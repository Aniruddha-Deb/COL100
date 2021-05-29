#include <stdio.h>
#include <stdbool.h>

// implemented in the divide and conquer form
int min(int* A, int l, int h) {
	if (l == h-1) return l;
	int m1 = min(A,l,(l+h)/2);
	int m2 = min(A,(l+h)/2,h);
	return A[m1] > A[m2] ? m2 : m1;
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	printf("%d\n", min(A,0,n));

	return 0;
}
