#include <stdio.h>
#include <stdbool.h>

int main() {
	
	float f;
	scanf("%f", &f);

	unsigned int fneg = *((unsigned int*)&f) ^ (1<<31);

	printf("%g\n", *((float*)&fneg));

	return 0;
}
