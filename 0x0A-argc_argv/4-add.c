#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two number followed by new line
 * @argc: int
 * @argv: list
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > '0' || *argv[i] < '9')
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
