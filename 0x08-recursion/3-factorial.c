#include "main.h"

/**
 * factorial - calculate fact of number
 * @n : int
 * Return: factorail.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorail(n - 1));
}

