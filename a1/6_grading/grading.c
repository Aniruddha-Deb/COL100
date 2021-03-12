#include <stdio.h>

int main() {
	
	float g;
	scanf("%f", &g);

	if (g >= 86 && g <= 100) {
		printf("A+\n");
	}
	else if (g >= 71 && g < 86) {
		printf("A-\n");
	}
	else if (g >= 56 && g < 71) {
		printf("B+\n");
	}
	else if (g >= 41 && g < 56) {
		printf("B-\n");
	}
	else if (g >= 26 && g < 41) {
		printf("C\n");
	}
	else if (g >= 0 && g < 26) {
		printf("F\n");
	}
	else {
		// g > 100 or g < 0, so invalid 
		printf("Invalid Input\n");
	}
	return 0;
}
