#include "main.h"

/**
 * append_text_to_file - append
 * @filename: name of file
 * @text_content: the cont
 * Return: 1 on success or -1 in fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int dn;
	ssize_t b;

	if (filename == NULL)
		return (-1);
	dn = open(filename, O_WRONLY | O_APPEND);
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
