#include <stdio.h>
#include <stdbool.h>

int tersearch(int *A, int n, int s) {

	if (n == 1 && A[0] != s) return -1;
	else if (n == 1 && A[0] == s) return 1;

	if (n == 2 && A[0] != s && A[1] != s) return -1;
	else if (n == 2 && (A[0] == s || A[1] == s)) return 1;

	if (s < A[n/3]) return tersearch(A,n/3,s);
	else if (s < A[2*n/3]) return tersearch(A+n/3,n/3,s);
	else return tersearch(A+2*n/3,(n+2)/3,s);
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

	printf("%d\n", tersearch(A,n,s));

	return 0;
}
