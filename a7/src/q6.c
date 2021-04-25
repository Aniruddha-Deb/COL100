#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}

	int l = A[0];
	int sl = A[1];
	if (sl < l) {
		int temp = l;
		l = sl;
		sl = temp;
	}
	for (int i=2; i<n; i++) {
		if (A[i] < l) l = A[i];
		if (A[i] > l && A[i] < sl) sl = A[i];
	}

	printf("%d\n", sl);

	return 0;
}
