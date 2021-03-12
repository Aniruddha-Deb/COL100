#include <stdio.h>
#include <math.h>

int main() {
	
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) {
		printf("Not a Quadratic Equation\n");
		return 0;
	}

	float D = b*b - 4*a*c;
	if (D > 0) {
		float r1 = (-b + sqrt(D))/(2*a);
		float r2 = (-b - sqrt(D))/(2*a);
		printf("%.3f %.3f\n", r1, r2);
	}
	else if (D == 0) {
		float r = (-b)/(2*a);
		printf("%.3f\n", r);
	}
	else {
		printf("No Real Roots\n");
	}
	return 0;
}
