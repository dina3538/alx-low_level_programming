#include "main.h"

/**
 * *cap_string - captitalizes all words of a string.
 * @str: the string to be captitalized
 *
 * Return: str
*/

char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index == 0)
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
			}
		}
		if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}')
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
			}
		}
		index++;
	}
	return (str);
}
