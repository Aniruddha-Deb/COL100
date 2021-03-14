#include <stdio.h>

int main() {
	
	int x, n;
	scanf("%d %d", &x, &n);
	long ans = 1;
	// note that this cannot handle negative values of n eg 2^-3 = 0 and not 0.125
	for (int i=0; i<n; i++) {
		ans *= x;
	}
	printf("%ld\n", ans);
	return 0;
}
