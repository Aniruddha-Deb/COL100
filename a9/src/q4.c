#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
	
	char A[100];
	int freq[26];
	memset(freq, 0, sizeof(freq));
	scanf("%99[^\n]s", A);
	int n = strlen(A);
	for (int i=0; i<n; i++) {
		freq[A[i]-'a']++;
	}
	bool odd_enc = false;
	bool possible = true;
	for (int i=0; i<26; i++) {
		if (freq[i]%2 == 1 && n%2 == 1) {
			// odd length and odd character frequency - there should be only one 
			// character with odd frequency 
			if (odd_enc) {
				possible = false;
				break;
			}
			else odd_enc = true;
		}
		else if (freq[i]%2 == 1 && n%2 == 0) {
			// even length and odd frequency of character - not possible
			possible = false;
			break;
		}
	}

	printf(possible?"YES\n":"NO\n");

	return 0;
}
