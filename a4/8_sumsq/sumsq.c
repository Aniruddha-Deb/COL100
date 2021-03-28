#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
	scanf("%d", &n);

	// note that the worst-case time complexity of this function is O(n^2). 
	// This is acceptable, given the very small upper bound of n (n <= 100), and
	// the program has an ok runtime
	//
	// for scaling this up, there are two interesting solutions: the first 
	// is the sum of two squares theorem: a number can be expressed as the sum
	// of two squares iff it's prime decomposition contains no term p^k, where
	// prime p = 3 mod 4, and k is odd. For a number t < n, assuming the primes
	// are already generated and stored, the prime decomposition can be done
	// in less time than O(n). This gives us an overall time complexity less
	// than O(n^2)
	//
	// another more inaccurate method is to use the Landau-Ramanujan constant
	// to directly gives us the answer; this works badly for small n
	// because this constant doesn't converge quickly, but it's basically a 
	// O(1) formula, which gives the number of numbers that can be expressed
	// as the sum of two squares below n as a function of n. Note how the
	// function is bn/ln(n), very similar to the prime-counting function.

	int sum = 0;
	for (int i=1; i<=n; i++) {
		bool found = false;
		for (int j=0; j<=(int)sqrt(n); j++) {
			if (found) break;
			for (int k=j; k<=(int)sqrt(n); k++) {
				if (j*j + k*k == i) {
					sum++;
					found = true;
					break;
				}
			}
		}
	}

	printf("%d\n", sum);

	return 0;
}
