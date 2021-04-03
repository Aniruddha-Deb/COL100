#include <stdio.h>

int main() {
	
	int a,b,c,d,e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	// this is messy; would be simple with arrays
	int mab = (a>b)?a:b;
	int mcd = (c>d)?c:d;
	int mcde = (mcd > e)?mcd:e;
	int m = (mab>mcde)?mab:mcde;

	for (int i=m; i>0; i--) {
		if (i <= a) printf("#");
		else printf(" ");

		if (i <= b) printf("#");
		else printf(" ");

		if (i <= c) printf("#");
		else printf(" ");

		if (i <= d) printf("#");
		else printf(" ");

		if (i <= e) printf("#");
		else printf(" ");

		printf("\n");
	}

	return 0;
}
