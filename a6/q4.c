#include <stdio.h>

int main() {
	
	int x,y;
	scanf("%d %d", &x, &y);

	int z = x^y;
	int count = 0;
	for (int i=0; i<32; i++) {
		if (z & (1<<i)) count++;
	}

	printf("%d\n", count);

	return 0;
}
