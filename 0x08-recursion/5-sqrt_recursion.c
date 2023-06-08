#include "main.h"

/**
 * natural_square - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */
int natural_square(int n, int c)
{
	if (c * c > n)
		return (-1);
	else if (c * c == n)
		return (c);
	else
		return (natural_square(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: square root or -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (natural_square(n, 2));
}

