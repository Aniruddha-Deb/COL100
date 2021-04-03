#include <stdio.h>

int main() {
	
	int a, b;
	scanf("%d %d", &a, &b);

	if (a == 1) a = 2;

	// there are more efficient ways of doing this, using some factorization
	// and euler's totient function, but I've refrained from implmenting 
	// that here because a,b <= 1000 is a mangeable bound. Time complexity of 
	// this is O(n^2log(n))

	long n = 0;
	for (int i=a; i<=b; i++) {
		for (int j=i; j<=b; j++) {
			// get GCD of i and j
			int u = i;
			int v = j;
			while (u != 0) {
				int t = u;
				u = v%u;
				v = t;
			}
			if (v > 1) n++;
		}
	}

	printf("%ld\n", n);
	return 0;
}
