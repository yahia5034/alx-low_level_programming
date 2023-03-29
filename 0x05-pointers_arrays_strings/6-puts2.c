#include "main.h"

/**
 * puts2 - print even
 * @str: input string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 0)
			continue;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
