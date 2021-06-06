#include <stdio.h>

int get_num(int *A, int i, int j) {
	return A[(i*(i+1))/2 + j];
}

int min(int a, int b) { 
	return a>b ? b : a;
}

int min_cost_path(int *A, int i, int j, int n) {
	if (i == n-1) return get_num(A, i,j);
	return get_num(A, i,j) + min(min_cost_path(A,i+1,j,n), min_cost_path(A,i+1,j+1,n));
}

int main() {
	int n; 
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<(n*(n+1))/2; i++) {
		scanf("%d", &A[i]);
	}

	printf("%d\n", min_cost_path(A,0,0,n));

	return 0;
}

