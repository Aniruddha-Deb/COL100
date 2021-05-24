#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int randint(int l, int h) {
	return (int)((((float)rand())/RAND_MAX)*(h-l+1) + l);
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarr(int *A, int n) {
	for (int i=0; i<n; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

int partition(int *A, int l, int h) {

	int p = randint(l,h);
	int p_num = A[p];
	//printf("randint(%d,%d) = %d\n",l,h,p);

	int pos = l;
	for (int i=l; i<=h; i++) {
		if (A[i] < A[p]) {
			swap(A+i,A+pos);
			if (pos == p) p = i;
			pos++;
		}
	}
	// position of element may have changed while swapping; refind the original
	// element and swap it out
	swap(A+p,A+pos);
	return pos;
}

void quicksort(int *A, int l, int h) {
	if (h-l > 0) {
		int p = partition(A,l,h);
		quicksort(A,l,p-1);
		quicksort(A,p+1,h);
	}
}

int main() {

	srand(time(NULL));
	
	int n;
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	quicksort(A,0,n-1);

	printarr(A,n);

	return 0;
}
