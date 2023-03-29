#include "main.h"

/**
 * rev_string - reverse the string
 * @s: input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, count = 0;
	char temp;

	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	for (i = 0 ; count != i && i < count; i++, count--)
	{
		temp = *(s + i);
		*(s + i) = *(s + count);
		*(s + count) = temp;
	}
}
