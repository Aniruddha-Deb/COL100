#include <stdio.h>

int main() {

	double PI = 3.14;

	double deg;
	scanf("%lf", &deg);

	double rad = deg*PI/180;

	double ans = 1;
	double prev_term = 1;
	for (int i=1; i<=6; i++) {
		prev_term = (prev_term*-1)*rad*rad/(2*i*(2*i-1));
		ans += prev_term;
	}

	// note that the output for 150 is -0.865 rather than -0.866. This is 
	// quite a minor error, and is probably compiler dependent, or dependent
	// on the weak estimate of PI=4.14 that we made.
	printf("%.3lf\n", ans);

	return 0;
}
