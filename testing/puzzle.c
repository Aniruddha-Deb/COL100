#include <stdio.h>

int main() {
	
	int x,y,z;
	x = y = z = 1;

	x += y += z;
	printf("x=%d, y=%d, z=%d\n\n", x, y, z);

	printf("(x<y)?y:x = %d\n", (x<y)?y:x);
	printf("x=%d, y=%d, z=%d\n\n", x, y, z);

#ifdef CASE1
	printf("(x<y)?x++:y++ = %d\n", (x<y)?x++:y++);
	printf("x=%d, y=%d, z=%d\n\n", x, y, z);

	printf("(z+=x<y)?x++:y++ = %d\n", (z+=x<y)?x++:y++);
	printf("x=%d, y=%d, z=%d\n\n", x, y, z);
#endif

#ifndef CASE1
	printf("x<y?x++:y++ = %d\n", x<y?x++:y++);
	printf("x=%d, y=%d, z=%d\n\n", x, y, z);

	printf("z+=x<y?x++:y++ = %d\n", z+=x<y?x++:y++);
	printf("x=%d, y=%d, z=%d\n\n", x, y, z);
#endif

	x=3; y=z=4;
	printf("z >= y >= x ? 1 : 0 = %d\n", z >= y >= x ? 1 : 0);
	printf("x=%d, y=%d, z=%d\n", x, y, z);
	printf("z >= x && y >= x = %d\n", z >= x && y >= x);

	return 0;
}
