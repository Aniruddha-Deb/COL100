#include <stdio.h>
#include <math.h>

int main() {
	
	// assuming that the range is small enough to be an integer
	int a, b;
	scanf("%d %d", &a, &b);

	for (int i=a; i<=b; i++) {
		int crt = (int)cbrt(i);
		int count = 0;
		for (int j=1; j<=crt; j++) {
			for (int k=j; k<=crt; k++) {
				if (j*j*j + k*k*k == i) count++;
			}
		}
		if (count == 2) {
			printf("%d\n", i);
		}
	}

	return 0;
}
