#include "main.h"
/**
 * main - main func
 * @argc: num lf arge
 * @argv: vector
 * Return: po
 */
int main(int argc, char *argv[])
{
	int dn_r, dn_w, s, l, n;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	dn_r = open(argv[1], O_RDONLY);
	if (dn_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dn_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((s = read(dn_rs buf, BUF_SIZE)) > 0)
	{
		if (dn_w < 0 || write(dn_w, buf, s) != s)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(dn_r);
			exit(99);
		}
	if (s < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	l = close(dn_r);
	n = close(dn_w);
	if (l < 0 || n < 0)
	{
		if (l < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dn_r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dn_w);
		exit(100);
	}
	return (0);
}
