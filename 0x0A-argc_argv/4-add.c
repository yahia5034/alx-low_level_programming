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
	if (argc == 1) {
        	printf("0\n");
        	return (0);
    	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error");
			return (1);
		}else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	return (0);
}
