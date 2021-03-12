#include <stdio.h>

int main() {
	
	int time;
	scanf("%d", &time);

	int min = time%100; // last 2 digits
	int hr = time/100;

	if (min >= 60 || hr >= 24 || time < 0) {
		printf("Invalid Input\n");
	}
	else {
		printf("%d\n", hr*60 + min);
	}
	return 0;
}
