#include <stdio.h>

int main() {
	
	long ccno;
	scanf("%ld", &ccno);

	int sum = 0;
	long n = ccno;
	
	while (n>0) {
		int d = (n%100)/10;
		d *= 2;
		sum += (d/10) + d%10;
		n /= 100;
	}

	n = ccno;
	while (n > 0) {
		sum += n%10;
		n /= 100;
	}

	if (sum%10 == 0) printf("Valid\n");
	else printf("Invalid\n");

	return 0;
}
