#include <stdio.h>
#include <string.h>
#include <limits.h>

#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

int char_to_num(char num) {
	switch(num) {
		case 'I': return I;
		case 'V': return V;
		case 'X': return X;
		case 'L': return L;
		case 'C': return C;
		case 'D': return D;
		case 'M': return M;
	}
	return 0; // romans didn't have the concept of a zero, hehe
}

int char_to_idx(char c) {
	switch(c) {
		case 'I': return 0;
		case 'V': return 1;
		case 'X': return 2;
		case 'L': return 3;
		case 'C': return 4;
		case 'D': return 5;
		case 'M': return 6;
	}
	return 0;
}

int main() {
	
	int n;
	scanf("%d", &n);
	char s[n+1];
	char temp;
	scanf("%c", &temp); // swallow newline
	fgets(s, n+1, stdin);

	int num = 0;
	int i=0;
	int freq[] = {0, 0, 0, 0, 0, 0, 0};

	int prev_val = INT_MAX;

	do {
		int val = char_to_num(s[i]);
		if (val > prev_val) num += (val-2*prev_val);
		else num += val;
		prev_val = val;
		if (val != 0) freq[char_to_idx(s[i])]++;
		i++;
	} while (i<strlen(s));
	// note the strlen(s): this gives a correct output even if the input length
	// is greater than the length of the string input

	// error checking
	if ( freq[0] <= 3 && freq[2] <= 3 && freq[4] <= 3 && freq[6] <= 3 &&
		 freq[1] <= 1 && freq[3] <= 1 && freq[5] <= 1 ) 
		 printf("%d\n", num);
	else printf("Invalid number\n");

	return 0;
}
