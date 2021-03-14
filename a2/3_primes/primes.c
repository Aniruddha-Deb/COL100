#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	
	int n;
	scanf("%d", &n);
	bool prime = true;
	for (int i=2; i<=(int)(sqrt(n)); i++) {
		if (n%i == 0) {
			prime = false;
		}
	}
	if (prime) printf("Is a Prime Number\n");
	else printf("Not a Prime Number\n");

	return 0;
}
