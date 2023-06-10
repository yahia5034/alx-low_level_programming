#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a number, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0 if all ok ,else 1.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}

