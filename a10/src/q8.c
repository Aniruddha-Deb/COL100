#include <stdio.h>
#include <stdbool.h>

void merge(int *A, int l, int m, int h) {
	int a1[100],a2[100];
	int a1ctr, a2ctr;
	a1ctr = a2ctr = 0;
	for (int i=l; i<=m; i++) {
		a1[a1ctr++] = A[i];
	}
	for (int i=m+1; i<=h; i++) {
		a2[a2ctr++] = A[i];
	}
	int la1 = m-l+1;
	int la2 = h-m;

	a1ctr = a2ctr = 0;
	for (int i=l; i<=h; i++) {
		if (a1ctr < la1 && a2ctr < la2) {
			if (a1[a1ctr] < a2[a2ctr]) A[i] = a1[a1ctr++];
			else A[i] = a2[a2ctr++];
		}
		else if (a1ctr >= la1) A[i] = a2[a2ctr++];
		else if (a2ctr >= la2) A[i] = a1[a1ctr++];
	}
}

void mergesort(int *A, int l, int h) {
	if (l < h) {
		int m = (l+h)/2;
		mergesort(A,l,m);
		mergesort(A,m+1,h);
		merge(A,l,m,h);
	}
}

int main() {
	
	int n;
	int A[100];
	scanf("%d", &n);
	for (int i=0; i<n; i++) scanf("%d", &A[i]);

	mergesort(A,0,n-1);
	for (int i=0; i<n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
	return 0;
}
