#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;

	int x = 50+++a;
	int y = a++ + ++b;
	printf("%d\n", x);
	printf("%d\n", y);
	return 0;
}
