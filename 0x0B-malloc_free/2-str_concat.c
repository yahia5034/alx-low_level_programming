#include "main.h"
/**
 * *str_concat - concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: returns eturned pointer should point to a
 * newly allocated space or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int n1 = 0, n2 = 0;
	char *n;
	int x1, x2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[n1] != 0)
		n1++;
	while (s2[n2] != 0)
		n2++;

	n = malloc(n1 + n2 + 1);
	x1 = n1;
	x2 = n2;
	if (n == NULL)
		return (n);
	while (x1--)
		n[x1] = s1[x1];
	while (x2--)
		n[x2 + n1] = s2[x2];
	return (n);
}
