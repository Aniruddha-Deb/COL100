#include <stdio.h>

int main() {
	
	int n, b;
	scanf("%d %d", &n, &b);
	int A[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	// note that this repeats numbers: for example, the input
	// 5 10
	// 6 4 6 4 6
	// would print a bunch of repeated pairs (2x3 = 6 to be exact)
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (A[i]+A[j] == b) printf("%d %d\n", A[i], A[j]);
		}
	}

	return 0;
}
