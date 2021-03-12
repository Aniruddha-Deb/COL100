#include <stdio.h>

int main() {
	
	float sweater_p, sweater_d, sweater_t;
	float shoes_p, shoes_d, shoes_t;
	scanf("%f %f %f", &sweater_p, &sweater_d, &sweater_t);
	scanf("%f %f %f", &shoes_p, &shoes_d, &shoes_t);

	if (sweater_p <= 0 || sweater_d > 100 || sweater_d < 0 || sweater_t > 100 || sweater_t < 0) {
		printf("Invalid Input\n");
	}
	else if (shoes_p <= 0 || shoes_d > 100 || shoes_d < 0 || shoes_t > 100 || shoes_t < 0) {
		printf("Invalid Input\n");
	}
	else {
		float sweater_mul = (1 - sweater_d/100)*(1+sweater_t/100);
		float shoes_mul = (1-shoes_d/100)*(1+shoes_t/100);
		printf("%.2f\n", sweater_p*sweater_mul + shoes_p*shoes_mul);
	}
	return 0;
}
