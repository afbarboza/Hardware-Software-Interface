#include <stdio.h>

#define BITS_PER_BYTE 8

/**
 *  logicalShift - operates an right logical shift
 *
 *  @x: int value to be shifted
 *  @n: number of bits to shifted
 *
 *  this function shifts x to the right by n, using a logical shift,
 *  i.e.: filling the left end with n zeros, assuming that:
 *
 *  	i. 0 <= n <= 31
 *  	ii. the only legal operators that can be used is:
 *  	    ! ~ & ^ | + << >> and, as learning exercise, is
 *  	    forbidden to use any control constructs such as if, do, while, for, 
 *  	    switch, and only use int variables (no casting!)
 *
 *  return: the value of x logically shifted to the right
 *  	    by n bits.
 */
int logicalShift(int x, int n)
{
	int flag = (1 << 0X1F);
	int tmp = ((flag >> n) << 1);
	int mask = ~tmp;
	return ((x >> n) & mask);
}

void dec_to_bin(int value)
{
	int i = (sizeof(int) * BITS_PER_BYTE);
	int bit = 0;
	for (i -= 1; i >= 0; i--) {
		bit = value >> i;
		if (bit & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

int main(void)
{
	signed int value, shifted_value, nshifts;
	scanf("%d", &value);
	scanf("%d", &nshifts);
	shifted_value =  logicalShift(value, nshifts);

	printf("%d in bin base: \t\t", value);
	dec_to_bin(value);

	printf("%d shifted %d to the right: %d\t\t", value, nshifts, shifted_value);
	dec_to_bin(shifted_value);

	return 0;
}
