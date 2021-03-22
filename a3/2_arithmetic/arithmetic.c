#include <stdio.h>

int main() {
	
	int n;
	float a, d;
	scanf("%d %f %f", &n, &a, &d);

	for (int i=0; i<n; i++) {
		printf("%g ", a + i*d);
	}
	printf("\n");

	return 0;
}
