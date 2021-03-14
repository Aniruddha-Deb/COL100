#include <stdio.h>

int main() {
	
	int year;
	scanf("%d", &year);
	if (year%100 == 0 && year%400 != 0) {
		printf("Not a leap year\n");
	}
	else if (year%4 == 0) {
		printf("Leap year\n");
	}
	else {
		printf("Not a leap year\n");
	}
	return 0;
}
