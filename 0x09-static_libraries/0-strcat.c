#include "main.h"
#include <string.h>
/**
 * *_strcat - function that concatenate two strings
 * @dest: the output
 * @src: first string
 * Return: point to resuting string
 */

char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
		c1++;
	while (*(src + c2) != '\0')
	{
		*(dest + c1) = *(src + c2);
		if (src[c2] == '\0')
			break;
		c1++;
		c2++;
	}
	return (dest);
}
