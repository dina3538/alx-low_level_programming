#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to put the constant
 * @c: constant
 *
 * Return: pointer s if found or null if not
*/

char *_strchr(char *s, char c)
{
	int fi;

	for (fi = 0; s[fi] >= '\0'; fi++)
	{
		if (s[fi] == c)
		{
			return (s + fi);
		}
	}
	return ('\0');
}
