#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: input
 * @needle: input
 *
 * Return: 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s1 = haystack;
		char *s2 = needle;

		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (haystack);
	}

	return (NULL);
}
