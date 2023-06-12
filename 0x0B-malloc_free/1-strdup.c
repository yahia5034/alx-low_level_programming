#include "main.h"
/**
 * *_strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: returns a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	int s = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	while (str[s] != '\0')
		s++;

	n = malloc(s * sizeof(*str) + 1);
	if (n == 0)
		return (n);
	while (s--)
		n[s] = str[s];
	return (n);
}
