#include <stdio.h>

int main() {
	
	int n,h;
	scanf("%d %d", &n, &h);

	printf("*** CHRISTMAS TREE ***\n");

	for (int i=1; i<=n; i++) {
		for (int j=1; j<=h; j++) {
			for (int k=1; k<=2*h-1; k++) {
				if (k > (h-j) && k < (h+j)) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	for (int i=1; i<=h; i++) {
		for (int j=1; j<=h+1; j++) {
			if (j >= h-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
}
