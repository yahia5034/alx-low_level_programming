#include "main.h"

/**
 * print_traingle - prints a traingle
 *@size: input
 * Return: Always 0.
 * */

void print_triangle(int size)
{
	int i, j, n;

	for (n = 0; n < size; n++)
	{
		for (j = size-n-1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (i = 0;i <= n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
