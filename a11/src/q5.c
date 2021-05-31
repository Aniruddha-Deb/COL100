#include <stdio.h>
#include <stdbool.h>

struct complex {
	float real;
	float imag;
};

struct complex add(struct complex n1, struct complex n2) {
	struct complex ans;
	ans.real = n1.real + n2.real;
	ans.imag = n1.imag + n2.imag;
	return ans;
}

struct complex sub(struct complex n1, struct complex n2) {
	struct complex ans;
	ans.real = n1.real - n2.real;
	ans.imag = n1.imag - n2.imag;
	return ans;
}

struct complex mul(struct complex n1, struct complex n2) {
	struct complex ans;
	ans.real = n1.real*n2.real - n1.imag*n2.imag;
	ans.imag = n1.imag*n2.real + n2.imag*n1.real;
	return ans;
}

struct complex div(struct complex n1, struct complex n2) {
	n2.imag *= -1;
	struct complex ans = mul(n1,n2);
	float mod_n2 = n2.real*n2.real + n2.imag*n2.imag;
	ans.real /= mod_n2;
	ans.imag /= mod_n2;
	return ans;
}

int main() {
	
	struct complex n1, n2;
	char op;
	scanf("%f %f", &n1.real, &n1.imag);
	fflush(stdin);
	scanf("%c", &op);
	fflush(stdin);
	scanf("%f %f", &n2.real, &n2.imag);

	struct complex ans;
	switch(op) {
		case '+': ans = add(n1,n2); break;
		case '-': ans = sub(n1,n2); break;
		case '*': ans = mul(n1,n2); break;
		case '/': ans = div(n1,n2); break;
	}
	printf("%g %g\n", ans.real, ans.imag);

	return 0;
}
