#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	scanf("%d", &n);

	// just take 1 as initial guess - the algorithm takes care of the rest :)
	double fg = 1;

	do {
		fg = (fg + ((double)n)/fg)*0.5;

	} while (fabs(fg*fg - n) >= 0.001);

	printf("%lf\n", fg);

	return 0;
}
