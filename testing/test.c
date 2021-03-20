#include <stdio.h>

int main() {
	
	int x=3;
	int z = x/++x;
	printf("%d\n", z);
	return 0;
}
