#include "main.h"

/**
 * puts - prints a string
 * @str: string of character
 * Return: length of string.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
