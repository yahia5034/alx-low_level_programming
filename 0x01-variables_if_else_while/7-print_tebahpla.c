#include<stdio.h>
/**
 *main - description
 *
 *Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
