#include "main.h"

/**
 * read_textfile - raad file
 * @filename: name of the file
 * @letters: letter
 * Return: actual num
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dn;
	char buf[BUF_SIZE * 8];
	ssize_t b;

	if (filename == NULL || !letters)
		return (0);
	dn = open(filename, O_RDONLY);
	if (dn == -1)
		return (0);
	b = read(dn, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);

	close(dn);
	return (b);
}
