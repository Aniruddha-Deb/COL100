#include <stdio.h>
#include <stdbool.h>

void printarr(int len, int *A) {
	printf("%d\n", len);
	for (int i=0; i<len; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

bool bsearch(int len, int *A, int e) {
	int l = 0;
	int u = len-1;
	int m = (l+u)/2;
	while (l <= u) {
		if (A[m] == e) return true;
		else if (A[m] < e) l = m+1;
		else if (A[m] > e) u = m-1;
		m = (l+u)/2;
	}
	return false;
}

void bbsort(int len, int *A) {
	for (int i=0; i<len; i++) {
		for (int j=0; j<len-1; j++) {
			if (A[j+1] < A[j]) {
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main() {
	
	int la, lb;
	scanf("%d", &la);
	int A[la];
	for (int i=0; i<la; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &lb);
	int B[lb];
	for (int i=0; i<lb; i++) {
		scanf("%d", &B[i]);
	}

	int U[la+lb], I[la+lb];
	int hu, hi;
	hu = hi = 0;

	int l = la > lb ? la : lb;
	int s = la > lb ? lb : la;
	int *L = la > lb ? A : B;
	int *S = la > lb ? B : A;

	// not the best algorithm but eh, it works... the 'right' way to do it is
	// to implement a priority queue (basically a binary heap) and I'm too lazy 
	// to do that.
	for (int i=0; i<l; i++) {
		U[hu++] = L[i];
		if (bsearch(s, S, L[i])) I[hi++] = L[i];
	}
	for (int i=0; i<s; i++) {
		if (!bsearch(l, L, S[i])) U[hu++] = S[i];
	}
	bbsort(hu, U);

	printarr(hu, U);
	printarr(hi, I);
	return 0;
}
