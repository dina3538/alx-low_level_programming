#include "main.h"

/**
 * *_memset - function that fills memory with constant
 * @s: pointer that but constant
 * @b: the constant
 * @n: max byte to use
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int fi;

	for (fi = 0; n > 0; fi++, n--)
	{
		s[fi] = b;
	}

	return (s);
}
