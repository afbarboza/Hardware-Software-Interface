#include <stdio.h>
#include <stdlib.h>

#define BITS_PER_BYTE 8

void dec_to_bin(const unsigned char value)
{
	char i = (BITS_PER_BYTE * sizeof(unsigned char));
	char bit;
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

void operator_not(const unsigned char value)
{
	int val = ~value;
	dec_to_bin(val);
}

void operator_and(const unsigned char value1, const unsigned char value2)
{
	int val = value1 & value2;
	dec_to_bin(val);
}

void operator_or(const unsigned char value1, const unsigned char value2)
{
	int val = (value1 | value2);
	dec_to_bin(val);
}

/*
 * the result of an boolean operation xor is true if, and only if,
 * one value is true, but not both simultaneously.
 */
void operator_xor(const unsigned char value1, const unsigned char value2)
{
	int val = value1 ^ value2;
	dec_to_bin(val);
}

int main(void)
{
	unsigned char value1, value2, operation;
	scanf("%hhu %hhu %hhu", &value1, &value2, &operation);
	
	dec_to_bin(value1);
	dec_to_bin(value2);
	switch(operation) {
		case 1:
			operator_not(value1);
			break;
		case 2:
			operator_and(value1, value2);
			break;
		case 3:
			operator_or(value1, value2);
			break;
		case 4:
			operator_xor(value1, value2);
			break;
	} 
	return 0;
}
