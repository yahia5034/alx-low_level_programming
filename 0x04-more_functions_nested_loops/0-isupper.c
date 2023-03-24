#include "main.h"
/**
 *_isupper - function that checks for upper case
 *@c: takes c as input
 *Return: 1 as uppercase and 0 to lower case
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
