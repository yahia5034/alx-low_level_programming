#include "main.h"
#include<stdio.h>
/**
 * print_array - print no. of array
 * @a: the array.
 * @n: the number.
 * Return: none.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i++ != n)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
}
