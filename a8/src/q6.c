#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void encrypt(char str[], int k) {
	for (int i=0; i<strlen(str); i++) {
		char c = str[i];
		if (c>='a'&&c<='z') str[i] = 'a' + (c-'a'+k)%26;
		else if (c>='A'&&c<='Z') str[i] = 'A' + (c-'A'+k)%26;
	}
}

void decrypt(char str[], int k) {
	for (int i=0; i<strlen(str); i++) {
		char c = str[i];
		// modulo of negative numbers is negative, uff
		if (c>='a'&&c<='z') {
			int mod = (c-'a'-k)%26;
			if (mod < 0) mod += 26;
			str[i] = 'a' + mod;
		}
		else if (c>='A'&&c<='Z') {
			int mod = (c-'A'-k)%26;
			if (mod < 0) mod += 26;
			str[i] = 'A' + mod;
		}
	}
}

int main() {
	
	char s[100];
	scanf("%99[^\n]s", s);
	int n;
	scanf("%d", &n);

	encrypt(s, n);
	printf("Encrypted string: %s\n", s);
	decrypt(s, n);
	printf("Decrypted string: %s\n", s);

	return 0;
}
