#include "main.h"

/**
 * puts_half - print half string
 * @str: input
 * Return: none
 */
void puts_half(char *str)
{
	int i, n, c = 0;

	while (str[c] != '\0')
		c++;
	n = (c - 1) / 2;
	i = c / 2;
	while (n--)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
