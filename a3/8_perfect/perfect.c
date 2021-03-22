#include <stdio.h>

int main() {
	
	int n;
	scanf("%d", &n);

	int facsum = 0;
	for (int i=1; i<n; i++) {
		// this can be made a O(sqrt(n)) algorithm, if we also add n/i while 
		// adding the factors
		if (n%i == 0) facsum += i;
	}

	if (facsum == n) printf("Perfect\n");
	else printf("Not Perfect\n");

	return 0;
}
