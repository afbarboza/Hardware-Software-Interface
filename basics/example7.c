#include <stdio.h>

/*example 7: byte representation of program objects*/

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len)
{
	int i;
	for (i = 0; i < len; i++) {
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof(void *));
}

int main(void)
{
	int var;
	scanf("%d", &var);
	float fvar = (float) var;
	int *pvar = &var;
	show_int(var);
	show_float(fvar);
	show_pointer(pvar);
	return 0;
}
