#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i;
	int vector[128];
	for (i = 0; i < 128; i++) {
		vector[i] = i + 1;
	}

	int *array_ptr = &(vector[0]);
	for (i = 0; i < 128; i++) {
		printf("%d\t", (*array_ptr + i));
	}

	printf("\n");
	return 0;
}
