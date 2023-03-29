#include "main.h"

/**
 * puts_half - print half string
 * @str: input
 * Return: none
 */
void puts_half(char *str)
{
	int i, c = 0;

	while (str[c] != '\0')
		c++;
	if (c % 2 == 0)
	{
		i = (c - 1) / 2;
	}
	else
	{
		i = c / 2;
	}
	for (i++ ; i < c ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
