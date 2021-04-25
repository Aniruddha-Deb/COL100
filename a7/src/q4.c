#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	// x^x = 0, so simply XORing all the elements works
	int ans = 0, temp;
	for (int i=0; i<n; i++) {
		scanf("%d", &temp);
		ans ^= temp;
	}

	printf("%d\n", ans);

	return 0;
}
