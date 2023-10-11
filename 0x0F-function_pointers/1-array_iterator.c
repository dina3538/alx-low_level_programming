#include "function_pointers.h"

/**
 * array_iterator - excute func
 * @array: int
 * @size: array size
 * @action: pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ab = &array + size - 1;

	if (array && size && action)
		while (array <= ab)
			action = (*array++);
}
