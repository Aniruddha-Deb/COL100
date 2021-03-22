#include <stdio.h>
#include <math.h>

int main() {
	
	int n;
	scanf("%d", &n);

	for (int num=1; num<=n; num++) {

		int nd = (int)(log10(num) + 1); // Mathemagics to get number of digits
		
		int cbsum = 0;
		int t = num;
		int d;
		while (t > 0) {
			d = t%10;
			cbsum += (int)pow(d,nd);
			t /= 10;
		}

		if (cbsum == num) printf("%d ", num);
	}
	printf("\n");

	return 0;
}
