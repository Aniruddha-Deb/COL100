#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	int sdx = 0;
	for (int i=1; i<=n; i++) {
		int copy = i;
		int sum = 0;
		while (copy > 0) {
			sum += copy%10;
			copy /= 10;
		}
		sdx += i/sum;
	}

	printf("%d\n", sdx);

	return 0;
}
