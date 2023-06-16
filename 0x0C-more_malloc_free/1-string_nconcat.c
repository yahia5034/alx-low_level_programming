#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: new pointer or null.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, s1_ln, s2_ln, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_ln = 0; s1[s1_ln] != '\0'; s1_ln++)
		;
	for (s2_ln = 0; s2[s2_ln] != '\0'; s2_ln++)
		;

	p = malloc(s1_ln + n + 1);
	
	if (p == 0)
		return (NULL);
	
	for (i = 0; i < s1_ln; i++)
		p[i] = s1[i];
	for (k = 0; i < n; i++, k++)
		p[i] = s2[k];
	
	p[i] = '\0';
	return (p);
}
