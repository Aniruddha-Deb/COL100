#include <stdio.h>
#include <stdlib.h>

#define SOURCE 0
#define SPARE  1
#define TARGET 2

int *S, *T, *A;
int ls, lt, la;

void print(int *s, int *t, int *a, int sl, int tl, int al) {
	for (int i=0; i<sl; i++) {
		printf("%d ", s[i]);
	}
	printf("\n");
	for (int i=0; i<al; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i=0; i<tl; i++) {
		printf("%d ", t[i]);
	}
	printf("\n");
	printf("------\n");
}

void solve(int n, int *source, int *target, int *aux, int *sl, int *tl, int *al) {
	
	if (n>0) {
		solve(n-1, source, aux, target, sl, al, tl);
		target[(*tl)++] = source[--(*sl)];
		print(S, T, A, ls, lt, la);
		solve(n-1, aux, target, source, al, tl, sl);
	}
}

int main() {
	
	S = (int*)malloc(sizeof(int)*5);
	S[0] = 4;
	S[1] = 3;
	S[2] = 2;
	S[3] = 1;
	T = (int*)malloc(sizeof(int)*5);
	A = (int*)malloc(sizeof(int)*5);
	ls = 4;
	lt = 0;
	la = 0;
	solve(4, S, T, A, &ls, &lt, &la);

	return 0;
}
