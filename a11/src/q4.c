#include <stdio.h>
#include <stdbool.h>

int main() {

	// deep 
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

	printf("%p\n", arr); // prints the address (0x64 on our hypothetical machine)
	printf("%p\n", arr[0]); // prints the same address
	printf("%d\n", arr[0][0]);
	printf("%p\n", arr+1);
	printf("%p\n", arr[0]+1);
	printf("%ld\n", arr[1]-arr[0]);
	printf("%d\n", *(*(arr + **arr + 1) + 1)); // *(arr+**arr+1)[1] = arr[**arr+1][1] = arr[2][1] = 10

	return 0;
}
