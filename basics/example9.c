#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show_bytes(const char *base, size_t len)
{
	if (base == NULL) {
		fprintf(stderr, "error: null pointer.\n");
		return;
	}
	
	int i;
	for (i = 0; i < len; i++) {
		printf("%p\t0x%.2x\n", base + i, *(base + i));
	}
}

int main(void)
{
	show_bytes("alex", strlen("alex"));
	return 0;
}
