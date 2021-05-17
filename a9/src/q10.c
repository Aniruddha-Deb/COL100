#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int m, n;
	int A[100][100];
	scanf("%d %d", &m, &n);

	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int i=0; i<m+n-1; i++) {
		for (int j=0; j<=i; j++) {
			if (i-j < m && j < n) printf("%d ", A[i-j][j]);
		}
		printf("\n");
	}

	return 0;
}
