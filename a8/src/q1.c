#include <stdio.h>
#include <stdbool.h>

bool isSorted(int A[], int n) {
	bool sortAsc = true;
	bool sortDesc = true;
	for (int i=0; i<n; i++) {
		if (i < n-1 && A[i] > A[i+1]) sortAsc = false;
		if (i > 0 && A[i] > A[i-1]) sortDesc = false;
	}
	return sortAsc || sortDesc;
}

int main() {
	
	int n;
	int A[100];
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	printf(isSorted(A,n) ? "true\n" : "false\n");

	return 0;
}
