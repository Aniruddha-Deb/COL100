#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
	scanf("%d", &n);

	int p = 1;
	int r = 1;
	int c = 1;

	// interesting thing to note is that this program will terminate, because 
	// Euclid's theorem states that there are infinitely many primes, hence
	// given enough time, a prime square of arbitrarily large size can be
	// generated. Although for a large enough square, integer overflow is a 
	// bigger issue than termination :P

	// the mess could have been better handled by creating a function to do
	// the primality test
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			p++;
			bool is_prime = true;
			do {
				is_prime = true;
				for (int k=2; k<p; k++) {
					if (p%k == 0) {
						is_prime = false;
						break;
					}
				}
				if (!is_prime) {
					p++;
				}
			} while (!is_prime);
			printf("%d ", p);
		}
		printf("\n");
	}

	return 0;
}
