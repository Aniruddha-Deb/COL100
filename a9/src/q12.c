#include <stdio.h>

void pattern(int n, int i) {
	if (n == 0) return;
	pattern(n/2,i);
	for (int k=0; k<i; k++) printf(" ");
	for (int k=0; k<n; k++) printf("*");
	printf("\n");
	pattern(n/2,i+n/2);
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	pattern(n, k);

	return 0;
}
