#include "main.h"
/**
 * rot13 - encode rot13
 * @s: pointer to string parameters
 *
 * Return: *s
*/

char *rot13(char *s)
{
	int i;
	int j;
	char datal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == datal[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}


