#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 *
 * @s: input string
 *
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i, j;
	char *rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ROT13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (rot13[j] != '\0')
		{
			if (s[i] == rot13[j])
			{
				s[i] = ROT13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (ptr);
}


