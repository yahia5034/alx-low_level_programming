#include "main.h"
/**
 *_isdigit - checks if the entered character is a digit or not
 *@c: input
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
