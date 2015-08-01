#include <stdio.h>
#include <limits.h>

#define BITS_PER_BYTE 8

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

int main(void)
{
	int var = -1;
	dec_to_bin(var);

	unsigned int n = (unsigned int) var;
	dec_to_bin(n);

	int tn = (n >> ((BITS_PER_BYTE * sizeof(int)) - 1));
	dec_to_bin(tn);
	return 0;
}
