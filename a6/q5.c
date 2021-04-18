#include <stdio.h>

int main() {
	
	int x;
	scanf("%d", &x);

	int count = 0;
	while (x) {
		x >>= 1;
		count++;
	}

	printf("%d\n", count-1);

	return 0;
}
