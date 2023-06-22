#include "function_pointers.h"

/**
 * int_index - returns index of the element
 * @array: the array size
 * @size: the size of array
 * @cmp: pointer to functions
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
