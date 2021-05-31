#include <stdio.h>
#include <stdbool.h>

void cyclicSwap(int *a, int *b, int *c) {
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
}

int main() {
	
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	cyclicSwap(&a, &b, &c);

	printf("%d %d %d\n", a, b, c);

	return 0;
}
