#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	if (n < 0) {
		printf("Invalid Input\n");
		return 0;
	}

	int f1 = 1;
	int fib = 0;
	for (int i=0; i<n; i++) {
		int temp = fib;
		fib += f1;
		f1 = temp;
	}
	printf("%d\n", fib);

	return 0;
}
