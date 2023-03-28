#include "main.h"

/**
 * swap_int - swaps two varaibles
 * @a: first input
 * @b: second input
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
