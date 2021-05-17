#include <stdio.h>
#include <string.h>

int main() {
	
	int D[10];
	memset(D, -1, sizeof(D));

	for (int i=0; i<10; i++) {
		printf("%d\n", D[i]);
	}

	return 0;
}
