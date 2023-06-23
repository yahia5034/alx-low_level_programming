#include "variadic_functions.h"
/**
 * sum_them_all - sum of variables
 * @n: number of args
 * @...: integers
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, count = n;
	va_list p;

	if (n == 0)
		return (0);
	while (count--)
		s += va_arg(p, int);
	va_end(p);
	return (s);
}
