#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int n;
	scanf("%d", &n);

	bool exists = true;
	if (n <= 1) exists = false;
	int l, sl;
	l = sl = 0;
	int t;
	for (int i=0; i<n; i++) {
		scanf("%d", &t);
		if (i == 0) l = t;
		else if (i == 1) {
			sl = t;
			if (sl > l) {
				// swap l and sl
				int temp = sl;
				sl = l;
				l = temp;
			}
		}
		else if (t > sl && t < l) sl = t;
		else if (t > l) l = t;
	}

	if (sl == l || !exists) printf("Second largest number does not exist\n");
	else printf("%d\n", sl);

	return 0;
}
