#include "main.h"
#include<stdlib.h>

/**
 * wnum - count the number of words
 * @s: string to count
 * Return: int of number of words
*/

int wnum(char *s)
{
	int i, m = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				m++;
		}
		else if (i == 0)
			m++;
	}
	m++;
	return (m);
}

/**
 * **strtow - function that splits a string into words.
 * @str: string to splits
 * Return: ponter to array
*/

char **strtow(char *str)
{
	int i, j, k, r, m = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	m = wnum(str);
	if (m == 1)
		return (NULL);
	w = (char **)malloc(m * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[m - 1] = NULL;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[m - 1]);
				free(w);
				return (NULL);
			}
			for (r = 0; r < j; r++)
				w[wc][r] = str[i + 1];
			w[wc][i] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}


