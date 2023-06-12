#include "main.h"
/**
 * *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: returns a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	int s = sizeof(str);
	char *n = malloc(sizeof(str));

	if (n == 0)
		return (n);
	while (s--)
		n[s] = str[s];
	return (n);
}
