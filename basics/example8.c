#include <stdio.h>

/*pointer arithmetic for array indexing in C*/

int main(void)
{
	int i;
	int big_array[128];
	for (i = 0; i < 128; i++) big_array[i] = 0;

	/*
 	* shows that a pointer to an array is the same thing
 	* that the address of its first element
 	*/
	int *array_ptr;
	array_ptr = big_array;
	printf("%p\t%p\n", array_ptr, big_array);

	array_ptr = &big_array[0];
	printf("%p\n", array_ptr);

	/*
 	 * shows that the index to an array is the same thing
 	 * that:
 	 * base_ptr += 3 * sizeof(int)
 	 */
	array_ptr = &big_array[3];
	printf("%p\n", array_ptr);

	array_ptr = &big_array[0] + 3;
	printf("%p\n", array_ptr);

	array_ptr = big_array + 3;
	printf("%p = %d\n", array_ptr, *array_ptr);

	*array_ptr = *array_ptr + 1;
	printf("%p = %d\n", array_ptr, *array_ptr);
	printf("%p = %d\n", &big_array[3], big_array[3]);
	printf("array size: %ld\n", (sizeof(big_array)/sizeof(int)));
	return 0;
}
