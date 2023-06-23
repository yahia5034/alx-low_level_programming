#include "variadic_functions.h"

/**
 * print_strings - print numbers followed by new line
 * @separator: type of separatop between them
 * @n: number of args
 * @...: numbers
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	int i = n;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (i--)
		printf("%s%s", (str = va_arg(p, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(p);
}
