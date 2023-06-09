#include "main.h"
/**
 * _strlength - calculate the len
 * @s: string
 * Return: length
 */
int _strlength(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int k = 0, i = 0, j = 0, cnt = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++, k++)
		k += _strlength(av[i]);
	s = malloc(sizeof(char) * k + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cnt++)
			s[cnt] = av[i][j];
		s[cnt] = '\n';
		cnt++;
	}
	s[cnt] = '\0';
	return (s);
}
