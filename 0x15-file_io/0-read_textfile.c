#include "main.h"
/**
 * read_textfile - reads a text file and prints it 
 * to the POSIX standard output
 * @filename: filename
 * @letters: number of letter to read and print
 * Return: 0 or number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bytes;
	char buf[1024 * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, 0_RDONLY)
	if (!f)
		return (0);
	bytes = read(filename, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(f);
	return (bytes);
}
