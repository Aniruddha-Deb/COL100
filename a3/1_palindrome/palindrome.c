#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);
	int rev=0;
	int d;
	int num = n;

	while (n>0) {
		d = n%10; // extract last digit of n
		rev = (rev*10) + d; // multiply reverse by 10 and add last digit to it
		n /= 10; // remove last digit from n
	}

	if (rev == num) printf("Palindrome\n");
	else printf("Not Palindrome\n");

	return 0;
}
