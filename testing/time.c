#include <time.h>
#include <stdio.h>

#define TICK(X) clock_t X = clock()
#define TOCK(X) printf("time %s: %g sec.\n", (#X), (double)(clock() - (X)) / CLOCKS_PER_SEC)

int main() {
	int a = 10;
	int b = 5;

	TICK(TIME_INT);
	int c = a+b;
	TOCK(TIME_INT);

	float x = 5.1342;
	float y = 10.3489;
	TICK(TIME_FLOAT);
	float z = x+y;
	TOCK(TIME_FLOAT);

	return 0;
}

