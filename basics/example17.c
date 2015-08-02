#include <stdio.h>

/*
 * bang - computes !a without using !
 * (and only straight forward code is allowed)
 */
int bang(int x)
{
	int non_zero = (((x | (~x + 1)) >> 31) & 1);
	int result = non_zero ^ 1;
	return result;
}



int main(void)
{
	int var;
	scanf("%d", &var);
	printf("!%d: %d\n", var, bang(var));
	return 0;
}
