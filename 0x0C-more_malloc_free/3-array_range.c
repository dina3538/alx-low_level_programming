#include "main.h"
#include<stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: the start
 * @max: max int
 * Return: array of integer
*/

int *array_range(int min, int max)
{
	int l, i;
	int *dd;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	dd = malloc(sizeof(int) * l);
	if (!dd)
		return (NULL);
	for (i = 0; i < l; i++)
		dd[i] = min++;
	return (dd);
}
