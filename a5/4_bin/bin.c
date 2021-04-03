#include <stdio.h>
#include <math.h>

int main() {
	
	int t;
	long n;
	scanf("%d %ld", &t, &n);

	if (t == 1) {
		int pv = 0;
		int d, dec=0;
		while (n > 0) {
			d = n%10;
			dec += (int)pow(2,pv) * d;
			n /= 10;
			pv++;
		}
		printf("%d\n", dec);
	}
	else {
		long bin = 0;
		int d;
		int tz = 0;
		while (n > 0) {
			d = n%2;
			if (bin == 0 && d == 0) tz++;
			bin = (bin*10) + d;
			n /= 2;
		}
		bin *= (int)pow(10,tz); // trailing zeros are not registered by bin; this puts them in
		printf("%ld\n", bin);
	}

	return 0;
}
