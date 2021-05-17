#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	
	int n, k;
	int lookup[1001];
	// -1 = 0xFF (1 byte). If a number having the given value exists, it's index
	// is stored here
	memset(lookup, -1, sizeof(lookup));
	scanf("%d %d", &k, &n);
	int idx_1 = -1;
	int idx_2 = -1;
	for (int i=0; i<n; i++) {
		int temp;
		scanf("%d", &temp);
		if (k-temp >= 0 && lookup[k-temp] != -1 && idx_1 == -1) {
			idx_1 = lookup[k-temp];
			idx_2 = i;
		}
		else if (lookup[temp] == -1) lookup[temp] = i;
	}

	printf("%d %d\n", idx_1, idx_2);

	return 0;
}
