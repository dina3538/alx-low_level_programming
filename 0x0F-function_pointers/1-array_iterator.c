#include "function_pointers.h"

/**
 * array_iterator - excute func
 * @array: int
 * @size: array size
 * @action: pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
}
