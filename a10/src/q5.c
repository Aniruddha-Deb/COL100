#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void partition(int *A, int n, int p) {
	int p_index = -1;
	// linear search to find index of pivot p
	for (int i=0; i<n; i++) {
		if (A[i] == p) {
			p_index = i;
			break;
		}
	}
	if (p_index == -1) return;

	int pos = 0;
	for (int i=0; i<n; i++) {
		if (A[i] < p) {
			swap(A+i,A+pos);
			if (pos == p_index) p_index = i;
			pos++;
		}
	}

	swap(A+p_index,A+pos);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	int p;
	scanf("%d", &p);

	partition(A,n,p);

	for (int i=0; i<n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}
