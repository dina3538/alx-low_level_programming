#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: the array
 * @size: num of elements
 * @cmp: pointer to func
 * Return: index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
