#include "main.h"

/**
 * *_strpbrk - locate the first occurance in string
 * @s: string
 * @accept: string to match
 *
 * Return: pointer if matches one of byte  or null if not
*/

char *_strpbrk(char *s, char *accept)
{
	int fi, fj;
	char *ptr;

	fi = 0;
	while (s[fi] != '\0')
	{
		fj = 0;
		while (accept[fj] != '\0')
		{
			if (accept[fj] == s[fi])
			{
				ptr = &s[fi];
				return (ptr);
			}
			fj++;
		}
		fi++;
	}
	return (0);
}
