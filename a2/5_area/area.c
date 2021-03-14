#include <stdio.h>

int main() {
	
	double pi = 3.14159265;
	char choice;
	scanf("%c", &choice);
	if (choice == 'C') {
		double r;
		scanf("%lf", &r);
		printf("The area is %.2f\n", pi*r*r);
	}
	else if (choice == 'R') {
		double a, b;
		scanf("%lf %lf", &a, &b);
		printf("The area is %.2f\n", a*b);
	}
	else if (choice == 'T') {
		double b, h;
		scanf("%lf %lf", &b, &h);
		printf("The area is %.2f\n", 0.5*b*h);
	}
	else {
		printf("Invalid Choice\n");
	}
	return 0;
}
