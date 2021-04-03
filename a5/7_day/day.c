#include <stdio.h>

int main() {
	
	int k,m,y;
	scanf("%d %d %d", &k, &m, &y);

	int D = y%100;
	int C = y/100;

	int F = k + (13*m-1)/5 + D + D/4 + C/4 - 2*C;

	printf("%d\n", (F%7>0)?F%7:7+F%7);

	return 0;
}
