#include <stdio.h>
#include <stdbool.h>

bool isprime(int p) {
	if (p == 0 || p == 1) return false;
	for (int i=2; i<p; i++) {
		if (p%i == 0) return false;
	}
	return true;
}

bool sumprime_rec(int n, int b) {
	if (n-b <= 0) return false;
	if (isprime(b) && isprime(n-b)) return true;
	else return sumprime_rec(n, b+1);
}

int main() {
	
	int n;
	scanf("%d", &n);

	// An easier way is to use results from Goldbach's Conjecture:
	// 1. There is no even number >= 4 that is not a sum of two primes (tested upto 10^18)
	// 2. If an odd number n is the sum of two primes, then n-2 is prime
	// here, I've taken a simple recursion based approach though. Note that the
	// primality test is still iterative in nature.

	printf(sumprime_rec(n, 2) ? "true\n" : "false\n");

	return 0;
}
