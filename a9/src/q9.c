#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
	int A[100][100];
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	for (int i=0; i<n/2; i++) {
		for (int j=i; j<n-i-1; j++) {
			int temp = A[i][j];
			A[i][j] = A[n-1-j][i];
			A[n-j-1][i] = A[n-i-1][n-j-1];
			A[n-i-1][n-j-1] = A[j][n-1-i];
			A[j][n-1-i] = temp;
		}
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}
