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

int main(void)
{
	unsigned char value1, value2, result;
	scanf("%hhu %hhu", &value1, &value2);	
	dec_to_bin(value1);

	result = value1 >> value2;
	printf("%hhu deslocado %hhu bits a direita: ", value1, value2);
	dec_to_bin(result);

	result = value1 << value2;
	printf("%hhu deslocado %hhu bits a esquerda: ", value1, value2);
	dec_to_bin(result);
	return 0;
}
