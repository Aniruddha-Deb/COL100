#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i=1; i<=n; i++) {
		bool found = false;
		for (int j=0; j<=(int)sqrt(n); j++) {
			if (found) break;
			for (int k=j; k<=(int)sqrt(n); k++) {
				if (j*j + k*k == i) {
					sum++;
					found = true;
					break;
				}
			}
		}
	}

	printf("%d\n", sum);

	return 0;
}
