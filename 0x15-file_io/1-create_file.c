#include "main.h"
/**
 * read_textfile - that creates a file.
 * @filename: filename
 * @letters: number of letter to read and print
 * Return: 1 succes -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	char *x = text_content;
	ssize_t bytes = 0, len = 0;
	while (*x++)
		len++;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (len)
		bytes = write(f, text_content, len);
	close(f);
	return (bytes == len ? 1 : -1);
}
