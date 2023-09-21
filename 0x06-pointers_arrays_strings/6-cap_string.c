#include "main.h"
#include<ctype.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the string to be capitalized
 *
 * Return: A pointer to the changed string
*/

char *cap_string(char *str)
{
	int capitalize = 1; /*Flag to indicate whether to capitalize the next character*/
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			str[i] = toupper(str[i]);
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
