#include <stdio.h>
#include <stdbool.h>

int merged[200];
void merge(int *A, int n, int *B, int m) {
	int ni, mi;
	ni = mi = 0;
	for (int i=0; i<n+m; i++) {
		if (ni < n && mi < m) {
			if (A[ni] < B[mi]) merged[i] = A[ni++];
			else merged[i] = B[mi++];
		}
		else if (ni >= n) merged[i] = B[mi++];
		else if (mi >= m) merged[i] = A[ni++];
	}
}

int main() {
	
	int n, m;
	int A[100],B[100];
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d", &A[i]);
	scanf("%d", &m);
	for (int i=0; i<m; i++) scanf("%d", &B[i]);

	merge(A,n,B,m);
	for (int i=0; i<n+m; i++) {
		printf("%d ", merged[i]);
	}
	printf("\n");
	return 0;
}
