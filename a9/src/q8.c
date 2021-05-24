#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// this is not a simple program, and I have implemented it keeping that in 
// mind.

////////////////////////////////////////////////////////////////////////////////
// Matrix Utility Methods
////////////////////////////////////////////////////////////////////////////////
double** new_sq_mat(int dim) {

	double **mat = malloc(sizeof(double*)*dim);
	for (int i=0; i<dim; i++) {
		mat[i] = malloc(sizeof(double)*dim);
	}
	
	return mat;
}

void free_sq_mat(double** mat, int n) {
	for (int i=0; i<n; i++) {
		free(mat[i]);
	}
	free(mat);
}

double** minor_mat(double** mat, int n, int row, int col) {
	double **m = new_sq_mat(n-1);
	int ri, ci;
	ri = ci = 0;
	for (int i=0; i<n; i++) {
		ci = 0;
		if (i == row) continue;
		for (int j=0; j<n; j++) {
			if (j == col) continue;
			m[ri][ci] = mat[i][j];
			ci++;
		}
		ri++;
	}

	return m;
}

void print_mat(double** mat, int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%.2lf ", mat[i][j]);
		}
		printf("\n");
	}
}

////////////////////////////////////////////////////////////////////////////////
// Computational methods
////////////////////////////////////////////////////////////////////////////////

double det(double **mat, int n) {
	if (n == 1) return mat[0][0];
	else if (n == 2) return mat[0][0]*mat[1][1] - mat[1][0]*mat[0][1];

	// implemented recursively; though this has a (much) worse time complexity
	// than calculating determinant via LU decomposition or gaussian elimination,
	// it's a bit simpler (especially after all the matrix utility methods we
	// made)
	double determinant = 0;
	for (int i=0; i<n; i++) {
		double** minor = minor_mat(mat, n, 0, i);
		double cofactor = pow(-1,i) * det(minor,n-1);
		free_sq_mat(minor, n-1);
		determinant += mat[0][i]*cofactor;
	}
	return determinant;
}

double** adj(double **mat, int n) {
	double **adjoint = new_sq_mat(n);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			double **minor = minor_mat(mat,n,i,j);
			double cofactor = pow(-1,i+j) * det(minor,n-1);
			adjoint[j][i] = cofactor;
			free_sq_mat(minor,n-1);
		}
	}
	return adjoint;
}

double** inv(double **mat, int n) {
	double **inverse = adj(mat, n);
	double determinant = det(mat, n);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			inverse[i][j] /= determinant;
		}
	}

	return inverse;
}

////////////////////////////////////////////////////////////////////////////////
// Main method
////////////////////////////////////////////////////////////////////////////////

int main() {
	
	int n;
	scanf("%d", &n);
	double **mat = new_sq_mat(n);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%lf", &mat[i][j]);
		}
	}

	double determinant = det(mat, n);
	if (determinant == 0) {
		printf("Inverse does not exist\n");
		free_sq_mat(mat,n);
		return 0;
	}
	double **inverse = inv(mat, n);
	print_mat(inverse, n);
	free_sq_mat(inverse,n);
	free_sq_mat(mat,n);

	return 0;
}
