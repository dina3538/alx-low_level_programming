#include "main.h"

/**
 * *string_toupper - change all lowercase letters of
 * a string to uppercase letters.
 * @str: the string to return
 *
 * Return: string
*/

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] -= 32;
			index++;
	}
	return (str);
}
