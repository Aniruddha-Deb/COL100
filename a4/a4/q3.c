#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	scanf("%d", &n);

	// the apex is reached in the middle. For patterns like this, the number 
	// of hashes printed as a function of row number r and size n is 
	// f(r,n) = n - abs(n+0.5-r), r = 1,2,..2n

	for (int i=1; i<=2*n; i++) {
		int f = n - floor(fabs(n+0.5-i));
		int l = 4*n-1-f;
		for (int j=1; j<=l; j++) {
			if ((j >= f && j <= 2*f-1) || (j >= l-f+1)) {
				printf("#");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
