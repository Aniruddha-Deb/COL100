#include <stdio.h>

int main() {
	char s[10];
	char b[10];
	sscanf("sum( 0110 , 0111 )", "sum( %s , %s )", s, b);
	printf("%s + %s\n", s, b);
	return 0;
}
