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

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	if(n)
		printf("%d\n", a[n - 1]);
}
