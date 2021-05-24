#include <stdio.h>
#include <stdbool.h>

/*
* Analysis:
* 
* We shall prove that the number of function calls f(n) = 2n-1
*
* Proof:
* Let's prove this by induction. for f(1), the function returns the only element
* present in the array, hence it takes one function call. Hence, f(1) = 1.
*
* For the induction step, assume that f(n) = 2n-1 for some n. If we have to 
* find the minimum element of an array of size n+1, it's equivalent to finding
* the minimum element in an array of size n and comparing it to the last element.
* this requires f(n) + 1 (last element call) + 1 (initial function call) = f(n) + 2
* function calls. Therefore, f(n+1) = f(n) + 2 = 2(n+1)-1. Hence, f(n+1) holds 
* whenever f(n) holds. Therefore, the theorem holds by induction.
*/
int min(int* A, int n) {
	if (n == 1) return 0;
	int midx = min(A,n-1);
	return A[midx] < A[n-1] ? midx : n-1;
}

int main() {
	
	int n;
	scanf("%d", &n);
	int A[100];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	printf("%d\n", min(A,n));

	return 0;
}
