/*
 * <Alex Frederico Ramos Barboza, 2015>
 *
 * example13.c: show how to extract the sign bit of a signed integer
 * 		only using bitwise operators.
 *
 * alex.barboza@usp.br
 */

#include <stdio.h>

#define BITS_PER_BYTE 8
#define MASK 0x20

void dec_to_bin(int value)
{
	int i = (BITS_PER_BYTE * sizeof(int));
	int bit;
	for (i -= 1; i >= 0; i--) {
		bit = value >> i;
		if (bit & 1) {
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");
}

int sign(int value)
{
	/*msb = -1, if < 0; msb = 0, otherwise*/
	int msb = ((value >> 31) & 1);
	msb = ((~(msb & 1)) + 1);
	printf("msb: %d\n", msb);

	/*is_zero = 0, if value == 0; is_zero = -1, otherwise*/
	int is_zero = (~(((value << 31) >> 31) & 0) + ((((!value) << 31) >> 31) & 1));
	printf("is_zero: %d\n", is_zero);

	int mask = (is_zero << 1);
	int result = is_zero ^ mask;
	return ((msb & msb) | (is_zero ^ mask));
}

int main(void)
{
	int value;
	scanf("%d", &value);

	printf("%d\n", sign(value));
	return 0;
}
