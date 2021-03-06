#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

bool candygame(int n) {
	if (n < 42) return false;
	if (n == 42) return true;
	bool win_2, win_34, win_5, win_n;
	win_2 = win_34 = win_5 = win_n = false;
	if (n%2 == 0) {
		win_2 = candygame(n/2);
		if (win_2) return true;
	}
	if (n%5 == 0) {
		win_5 = candygame(n-42);
		if (win_5) return true;
	}
	if ((n%3 == 0 || n%4 == 0)) {
		// if the product of the last 2 digits is 0, then there's infinite recursion
		int pl2d = ((n%10)*((n/10)%10));
		if (pl2d == 0) return false;
		win_34 = candygame(n-pl2d);
		if (win_34) return true;
	}
	return false;
}

int main() {
	
	int n;
	scanf("%d", &n);

	printf(candygame(n) ? "True\n":"False\n");

	return 0;
}
