#include <stdio.h>

int main() {
	
	int a, b;
	scanf("%d %d", &a, &b);

	long n = 0;
	for (int i=a; i<=b; i++) {
		n += b/i;
	}
	printf("%ld\n", n);

	return 0;
}
