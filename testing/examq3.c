#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n = 9;

	for (int i=-(n/2); i<=(n/2); i++) {
		for (int j=(-n/2); j<=n/2; j++) {
			if (j >= -abs(i) && j <= abs(i)) {
				printf("*");
			}
			else {
				printf("@");
			}
		}
		printf("\n");
	}

	return 0;
}