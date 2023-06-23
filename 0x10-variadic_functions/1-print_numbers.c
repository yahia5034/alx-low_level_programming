#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by new line
 * @separator: type of separatop between them
 * @n: number of args
 * @...: numbers
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;

	if (!n)
		printf("\n");
	va_start(p, int);
	if (separator == NULL)
		separator = "";
	while (n--)
		printf("%d%s", va_arg(p, int), separator);
	va_end(p);
}
