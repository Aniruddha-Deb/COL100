#include <stdio.h>
#include <string.h>

int hoo(int c1, int c2, int c3) {
	int res = c1 < c2 ? c1 : c2;
	res = res < c3 ? res : c3;
	return res;
}

int foo(char *s1, char *s2, int m, int n) {
	if (!m || !n) return m+n;
	if (s1[m-1] == s2[n-1]) return foo(s1,s2,m-1,n-1);
	else {
		int c1 = 1 + foo(s1,s2,m-1,n-1);
		int c2 = 1 + foo(s1,s2,m,n-1);
		int c3 = 1 + foo(s1,s2,m-1,n);
		return hoo(c1,c2,c3);
	}
}

int main() {
	char s1[20], s2[20];
	scanf("%s\n%s", s1,s2);
	int m = strlen(s1), n = strlen(s2);
	printf("%d\n", foo(s1,s2,m,n));

	return 0;
}
