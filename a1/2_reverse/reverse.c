#include <stdio.h>

int main() {
	
	int x;
	scanf("%d", &x);
	int rev = 0;
	int n = x;
	
	while (n > 0) {
		// extract the digit at the units position of n
		int d = n%10;
		// multiply rev by 10 and add d to it
		rev = (rev*10) + d;
		// remove the last digit from n
		n /= 10;
	}
	printf("%d\n", rev);
	// since it's a 4 digit number, 10 > rev/1000 > 0
	if (rev/1000 < 0 || rev/1000 > 9) printf("Invalid\n");
	else printf("Valid\n");

	return 0;
}
