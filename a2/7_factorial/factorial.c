#include <stdio.h>

int main() {
	
	long fact = 1;
	int n;
	scanf("%d", &n);
	if (n < 0) {
		printf("Invalid Input\n");
		return 0;
	}

	for (int i=1; i<=n; i++) {
		fact *= i;
	}
	printf("%ld\n", fact);
	return 0;
}
