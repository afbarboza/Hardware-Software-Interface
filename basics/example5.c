#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	int *a = (int *) malloc(5 * sizeof(int));

	/*inicializando o vetor*/
	for (i = 0; i < 5; i++) {
		a[i] = i;
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", *a + i);
	}
	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("%d\t", (*a + i));
	}
	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("%d\t", ((*a) + i));
	}
	printf("\n");

	free(a);
	a = NULL;

	return 0;
}
