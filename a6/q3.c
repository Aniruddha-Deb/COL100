#include <stdio.h>

int main() {
	
	int x;
	scanf("%d", &x);

	int count = 0;
	for (int i=0; i<32; i++) {
		if (x & (1<<i)) count++;
	}

	printf("%d\n", count);

	return 0;
}
