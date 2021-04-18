#include <stdio.h>

int main() {
	
	int x;
	scanf("%d", &x);

	int A[x];
	int t;
	for (int i=0; i<x; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &t);

	int count=0;
	for (int i=0; i<x; i++) {
		if (A[i] == t) count++;
	}

	printf("%d\n", count);

	return 0;
}
