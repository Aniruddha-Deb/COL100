#include <stdio.h>
#include <stdbool.h>

double det(double A[][100], int n) {
	// Gaussian elimination
	for (int i=0; i<n-1; i++) {
		// get pivot: the first nonzero element
		double pivot = 0;
		for (int j=i; j<n; j++) {
			if (A[i][j] != 0) { 
				pivot = A[i][j]; 
				break; 
			}
		}
		if (pivot == 0) continue;
		for (int j=i+1; j<n; j++) {
			double factor = A[j][i]/pivot;
			for (int k=i; k<n; k++) {
				A[j][k] -= A[i][k]*factor;
			}
		}
	}

	double det = 1;
	// calculate determinant; product of diagonal elements
	for (int i=0; i<n; i++) {
		det *= A[i][i];
	}
				
	return det;
}

// TODO:
// clean up the matrix calc: need to handle matrices (2D arrays) more elegantly
// array copying and printing methods
// cofactor calculation
// put cofactor calc together to calculate inverse

int main() {
	
	int n;
	double A[100][100];
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%lf", &A[i][j]);
		}
	}

	printf("%lf\n", det(A,n));

	return 0;
}
