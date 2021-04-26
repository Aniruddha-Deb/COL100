#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int A[n][n];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	bool symmetric = true;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (A[i][j] != A[j][i]) {
				symmetric = false;
				break;
			}
		}
	}

	if (!symmetric) printf("Not Symmetric\n");
	else printf("Symmetric\n");

	return 0;
}
