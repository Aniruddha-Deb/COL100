#include <stdio.h>

int main() {
	
	int n;
	scanf("%d\n", &n);

	float sum = 0;
	float temp;
	for (int i=0; i<n; i++) {
		scanf("%f", &temp);
		sum += temp;
	}

	printf("%g\n", sum);

	return 0;
}
