#include <stdio.h>

int main() {
	int n = 5;
	int m = 3;

	// Only the last value i.e. m=2 is returned here...
	printf("%d\n", (n=3,m=2));

	return 0;
}
