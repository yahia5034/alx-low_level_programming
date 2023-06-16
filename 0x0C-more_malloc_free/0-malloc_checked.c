#include "main.h"

/**
 * *malloc_checked -  a function that allocates memory using malloc
 * @b: input.
 * Return: pointer or 98 if false
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
