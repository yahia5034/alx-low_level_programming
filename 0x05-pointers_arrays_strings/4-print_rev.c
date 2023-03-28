#include "main.h"

/**
 * print_rev - reverse the string
 * @s: string input
 * Return: nothing
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	while (count)
	{
		count--;
		_putchar(s[count]);
	}
	_putchar('\n');
}
