#include "main.h"

/**
 * create_file - create
 * @filename: name of file
 * @text_content: the content
 * Return: 1 in success -1 in fail
 */

int create_file(const char *filename, char *text_content)
{
	int dn;
	ssize_t b;

	if (filename == NULL)
		return (-1);
	dn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (dn == -1)
		return (-1);
	if (text_content != NULL)
		b = write(dn, text_content, strlen(text_content));

	close(dn);
	if (b == -1)
		return (-1);
	else
		return (1);
}

