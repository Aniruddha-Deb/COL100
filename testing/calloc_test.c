#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *A = calloc(10,sizeof(int));
	int *B = calloc(7,sizeof(int));
	int *C = calloc(5,sizeof(int));

	printf("%d\n", (&A)[1] - A);
	printf("%d\n", (&B)[1] - B);
	printf("%d\n", (&C)[1] - C);

	return 0;
}
