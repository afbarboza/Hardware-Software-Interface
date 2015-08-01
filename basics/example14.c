/*
 * <Alex Frederico Ramos Barboza, 2015>
 *
 * example13.c: show how to extract the n-th byte from an
 * 		integer.
 *
 * alex.barboza@usp.br
 */

#include <stdio.h>

#define BITS_PER_BYTE 8

/*
 * getByte - extracts the n-th byte from an integer.
 *
 * @x: the byte will be extracted from this int parameter.
 * @n: the n-th desired byte. They are numbered from 0 (LSB)
 *     to the MSB. (most significant byte)
 *
 * return: the desired byte from the integer source
 */
int getByte(int x, int n)
{
	int nbits_shift = (n * BITS_PER_BYTE);
	int byte = ((x >> nbits_shift) & 0XFF);
	return byte;
}

int main(void)
{
	int x, n;
	printf("value: ");
	scanf("%d", &x);

	printf("desired byte: ");
	scanf("%d", &n);
	
	printf("byte: %d\n", getByte(x, n));
	return 0;
}
