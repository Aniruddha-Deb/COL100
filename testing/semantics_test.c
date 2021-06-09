#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int foo(int);
int bar(int);

int goof(int x) {
	printf("%d\n", x);
	return 42;
}

int foo(int x) {
	printf("In foo\n");
	bar(x);
	return 5;
}

// these two functions cause a stack overflow; no warning is generated

int bar(int x) {
	printf("In bar\n");
	foo(x);
	return 2;
}

void test() {
	return;
	printf("Statement after return");
}

int main() {
	goof(3.414); // gives a warning, not a compilation error. 3 is printed in goof

	//float f = 4.0;
	//printf("%.2f", f>>1); - This line doesn't compile, because >> takes integer
	// operands only

	int c[4];
	int *d = (int*)malloc(16);
	printf("%d %d\n", sizeof(c), sizeof(d));

	int a = 2, b = 3;
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int $name = 6;
	int _5name = 3;
	printf("%d %d\n", a<b, b<a);
	printf("a = %d %%%% b = %d\n", a, b);
	// A++; - this doesn't work
	int k = 5;
	int *ptr = &k;
	printf("%p\n", &(ptr));

	test();
	
	a = 1.5;

	char str[] = "DO\nOR\tDO\nNOT\0\0AINT NO TRY\0";
	char *B = str;
	printf("%u\n", strlen(B));
	printf("%u\n", strlen(B+15));

	return 0;
}
