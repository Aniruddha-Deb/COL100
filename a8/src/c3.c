#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int min(int a, int b) {
	return a<b?a:b;
}

int minCost(int cost[], int n) {
	if (n == 1) return cost[0];
	if (n == 2) return cost[1];
	return cost[n-1] + min(minCost(cost,n-1), minCost(cost,n-2));
}

int main() {
	
	int A[100];
	int n;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	printf("%d\n", min(minCost(A,n),minCost(A,n-1)));

	return 0;
}
