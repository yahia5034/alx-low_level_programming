#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a 
 * @array: the array
 * @size: size
 * @action: function to call
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action)
		while (i < size)
		{
			action(*array++);
			i++;
		}
}
