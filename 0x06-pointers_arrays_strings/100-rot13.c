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
	char *rott13 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *ROT13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (rott13[j] != '\0')
		{
			if (s[i] == rott13[j])
			{
				s[i] = ROT13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}


