#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	bool exists = false;
	for (int i=0; i<n; i++) {
		for (int j=i; j<n; j++) {
			int sum = 0;
			for (int k=i; k<=j; k++) {
				sum += A[i];
			}
			if (sum == 0) {
				exists = true;
				break;
			}
		}
	}

	printf(exists ? "true\n" : "false\n");

	return 0;
}
