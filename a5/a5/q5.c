#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	scanf("%d", &n);

	for (int i=0; i<n; i++) {
		int pn = n; // number to be printed
		for (int j=-(n-1); j<=n-1; j++) {
			if (j >= -(n-1-i) && j <= n-1-i) {
				printf("%d", pn);
				if (j >= 0) pn++;
				else pn--;
			}
			else printf(" ");

		}
		printf("\n");
	}

	return 0;
}
