#include <stdio.h>

int main() {
	
	int A[] = {1, 2, 3, 4, 5};
	long B[] = {6, 7, 8, 9, 10};

	for (int i=0; i<5; i++) {
		printf("A[%d]=%d, loc is %p\n", i, A[i], &A[i]);
		printf("*(A+i) is %d, loc is %p\n", *(A+i), A+i);
	}
	printf("\n");
	for (int i=0; i<5; i++) {
		printf("B[%d]=%d, loc is %p\n", i, B[i], &B[i]);
		printf("*(B+i) is %d, loc is %p\n", *(B+i), B+i);
	}

	return 0;
}
