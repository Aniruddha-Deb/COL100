#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// bad algorithm; a better algo would involve a list, or atleast swaps and 
// an inactive part of an array.
bool subset_sum_exists(int *A, int l, int n, int U) {
	if (n > (int)pow(2,l)) return false;
	int sum = 0;
	for (int i=0; i<l; i++) {
		if (n & (1 << i)) sum += A[i];
	}
	if (sum == U) return true;
	else return subset_sum_exists(A, l, n+1, U);
}

int main() {
	int A[100];
	int n, u;
	scanf("%d %d", &n, &u);
	for (int i=0; i<n; i++) scanf("%d", &A[i]);
	bool exists = subset_sum_exists(A, n, 0, u);
	printf(exists ? "YES\n" : "NO\n");
	return 0;
}
