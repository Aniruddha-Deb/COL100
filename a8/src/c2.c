#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canPlaceFlowers(int flowerbed[], int n, int k) {
	
	int n0 = 0;
	bool start = true;
	for (int i=0; i<n; i++) {
		if (flowerbed[i] == 0) n0++;
		else if (flowerbed[i] == 1) {
			// contiguous sequence is over, place some flowers down
			if (start) {
				k -= (n0/2);
				start = false;
			}
			else k -= ((n0-1)/2);
			n0 = 0;
		}
	}

	k -= (n0/2);
	return k<=0;
}

int main() {
	
	int A[100];
	int n, k;
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &k);

	printf(canPlaceFlowers(A,n,k)?"true\n":"false\n");

	return 0;
}
