#include <stdio.h>
#include <stdbool.h>

/*
* Analysis:
*
* TODO
*/
int binsearch(int *A, int n, int s) {

	if (n == 1 && A[0] != s) return -1;
	else if (n == 1 && A[0] == s) return 1;

	if (s < A[n/2]) return binsearch(A,n/2,s);
	else return binsearch(A+n/2,(n+1)/2,s);
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	int s;
	scanf("%d", &s);

	printf("%d\n", binsearch(A,n,s));

	return 0;
}
