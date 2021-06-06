#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>
#include "list.h"

void swap(int *A, int i, int j) {
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}

void listperm_arr(int *A, int l, int n) {
	if (l == n-1) {
		for (int i=0; i<n; i++) {
			printf("%d ", A[i]);
		}
		printf("\n");
		return;
	}
	for (int i=l; i<n; i++) {
		swap(A,i,l);
		listperm_arr(A,l+1,n);
		swap(A,i,l);
	}
}


int main() {
	
	int A[100];
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	listperm_arr(A,0,n);

	return 0;
}

