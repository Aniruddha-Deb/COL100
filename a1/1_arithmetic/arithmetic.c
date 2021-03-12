#include <stdio.h>
#include <limits.h>

int main() {
	// store inputs in longs, then cast them down to ints if the result is 
	// in range.
	long xl, yl;

	// If the integer that is input is outside the range of a 64-bit long,
	// then overflow occurs at the input stage (naturally). To check this, we 
	// would accept the input as a string and do range checking while converting
	// from str->long. Since we haven't covered strings yet, I've refrained from
	// implementing this here
	printf("x = ");
	scanf("%ld", &xl);
	printf("y = ");
	scanf("%ld", &yl);

	// checking if the values input are themselves big enough to fit in ints
	int no_ops = 0;
	if (xl > INT_MAX || xl < INT_MIN) {
		printf("x is out of bounds for an int. No operations will take place\n");
		no_ops = 1;
	}
	if (yl > INT_MAX || yl < INT_MIN) {
		printf("y is out of bounds for an int. No operations will take place\n");
		no_ops = 1;
	}
	if (no_ops == 1) return 0;

	// typecasting to an int works at this stage, because the ints will be used
	// only after the same calculations with the longs have been checked 
	// for overflow
	int x = (int)xl;
	int y = (int)yl;
	
	// checking for addition and subtraction overflow.
	long sum = xl+yl;
	long diff = xl-yl;

	// note that we're printing the int's sum rather than the longs. This is
	// fine, as we have checked that the sum will lie within the bounds.
	if (sum > INT_MAX || sum < INT_MIN) printf("Addition out of bounds\n");
	else printf("x+y = %d\n", x+y);

	if (diff > INT_MAX || diff < INT_MIN) printf("Subtraction out of bounds\n");
	else printf("x-y = %d\n", x-y);

	// for multiplication also, the same trick works; INT_MAX < 2^31, and 
	// (2^31)^2 = 2^62, which is less than LONG_MAX (~2^63). 
	long prod = xl*yl;

	if (prod > INT_MAX || prod < INT_MIN) printf("Multiplication out of bounds\n");
	else printf("x*y = %d\n", x*y);

	// division would be a bit more involved; since division is not closed 
	// in the set of integers, we would need reals while dividing. Real arithmetic
	// brings with it it's own set of considerations, which is why I've stuck
	// to integer division only in this implementation. This also frees us 
	// from range checking, since |x/y| <= |x| whenever x,y are integers
	if (y == 0) printf("Division by 0 is not possible\n");
	else printf("x/y = %d\n", x/y);

	// modulus is quite easy, since it only involves a division by 0 check,
	// and |x%y| < |y| for all integers x and y
	// note the absolute value signs above: in C99, the modulo operator is
	// defined as x = (x/y)*y + x%y, hence it acts more as a 'remainder' operator
	// rather than a modulus operator, and will take the sign of x. 
	if (y == 0) printf("Modulus by 0 is not possible\n");
	else printf("x%%y = %d\n", x%y);

	return 0;
}

// A few comments: what if the type we were implementing was 64-bit longs? 
// In that case, to check for overflow/underflow, since there is no larger size
// datatype to typecast to, we would have to manually check the conditions
// LONG_MIN < x+y < LONG_MAX and LONG_MIN < x-y < LONG_MAX, which is 4 inequalities.
// I could also have done this with integers, but this works for now. The real
// challenge is when we try checking bounds for multiplication. The algorithm
// for this would be to get the MSB's of both numbers and see if their sum is
// less than 63 (since long is 64 bits, it's max value is 2^63-1 (1 bit for sign)).
//
// Another comment that can be made is that the size is implementation specific:
// some systems could very well define int as 16 bits (Atmel AVR being an example).
// In this case, the problem statement would also change, and I haven't really
// given this much thought. Just assume an int is 32 bits.
