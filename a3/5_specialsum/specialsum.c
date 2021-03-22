#include <stdio.h>

int main() {
	
	int lb = 100;
	int ub = 999;
	int div = 17;
	
	long sum = 0;
	for (int i=(lb/div)+1; i*div < ub; i++) {
		sum += (i*div);
	}

	printf("%ld\n", sum);

	return 0;
}
