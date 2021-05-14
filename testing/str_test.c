#include <stdio.h>
#include <string.h>

int main() {
	char A[] = {'a', 'b', 'c', 'd', 'e', '\0'}; // this is a string
	char B[] = "hello"; // this too
	
	char C[] = {'a', 'b', 'c', 'd', 'e'}; // this is not!

	printf("%s\n", A);
	printf("%s\n", B);
	printf("%s\n", C);

//	char s[5];
//	scanf("%5[^\n]s", s);
//	printf("%s\n", s);

	return 0;
}
