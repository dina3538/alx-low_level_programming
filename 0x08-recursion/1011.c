#include "main.h"
char *move_past_star(char *s2);
int incap(char *s1, char *s2);

/**
 * *move_past_star - iterates past asterisk
 * @s2: the second string
 * Return: the pointer past star
*/

char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * incap - makes magic reality
 * @s1: the first string
 * @s2: second string
 * Return: 1 if identical, 0 if false
*/

int incap(char *s1, char *s2)
{
	int met = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		met += wildcmp(s1 + 1, s2 + 1);
	met += incap(s1 + 1, s2 + 1);
	return (met);
}

/**
 * wildcmp - compares two string
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if identical, 0 if false
*/

int wildcmp(char *s1, char *s2)
{
	int met = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			met += wildcmp(s1 + 1, s2 + 1);
		met += incap(s1, s2);
		return (!!met);
	}
	return (0);
}
