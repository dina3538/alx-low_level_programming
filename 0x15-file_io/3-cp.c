#include "main.h"
#include<stdio.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ER_NREAD "Error: Can't read from file %s\n"
#define ER_NWRITE "Error: Can't write to %s\n"
#define ER_NCLOSE "Error: Can't close fd %d\n"
#define PERMISS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - main func
 * @argc: num lf arge
 * @argv: vector
 * Return: po
 */
int main(int argc, char **argv)
{
	int f_from = 0, f_to = 0;
	ssize_t byte;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, ER_NREAD, argv[1]), exit(98);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISS);
	if (f_to == -1)
		dprintf(STDERR_FILENO, ER_NWRITE, argv[2]), exit(99);
	while ((byte = read(f_from, buf, BUF_SIZE)) > 0)
		if (write(f_to, buf, byte) != byte)
			dprintf(STDERR_FILENO, ER_NWRITE, argv[2]), exit(99);
	if (byte == -1)
		dprintf(STDERR_FILENO, ER_NREAD, argv[1]), exit(98);
	f_from = close(f_from);
	f_to = close(f_to);

	if (f_from)
		dprintf(STDERR_FILENO, ER_NCLOSE, f_from), exit(100);
	if (f_to)
		dprintf(STDERR_FILENO, ER_NCLOSE, f_from), exit(100);
	return (EXIT_SUCCESS);

}
