#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int myatoi(char A[], int l) {
	if (l == 0) return 0;
	int num = A[0]-'0';
	return num*((int)pow(10,l-1)) + myatoi(A+1,l-1);
}

int main() {
	
	int l;
	scanf("%d", &l);
	fflush(stdin);
	char s[100];
	scanf("%99[^\n]s", s);
	for (int i=0; i<l; i++) {
		if (s[i] < '0' || s[i] > '9') {
			printf("Invalid string\n");
			return 0;
		}
	}
	printf("%d\n", myatoi(s, l));

	return 0;
}
