#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int A[100][100];
	int n;
	scanf("%d", &n);

	int ctr = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			scanf("%d", &A[i][j]);
			if (i < j && A[i][j] == 1) ctr++;
			// note the <j here: we're implicitly assuming nobody is friends
			// with themselves. Even if they are, and A[i][i] == 1, we're not 
			// counting it.
		}
	}

	printf("\nNumber of pairs of friends = %d\n\n", ctr);

	int x,y;
	scanf("%d %d", &x, &y);
	bool mfe = false;
	for (int z=0; z<n; z++) {
		if (A[x][z] && A[y][z]) {
			mfe = true;
			break;
		}
	}
	printf(mfe ? "true\n" : "false\n");
	return 0;
}
