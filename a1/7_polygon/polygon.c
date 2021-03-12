#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	if (n < 3) printf("Invalid Input\n");
	else {
		double angle = (((double)n)-2)*180/n;
		// %g prints a float/double without trailing zeros
		printf("%g\n", angle);
	}
	return 0;
}
