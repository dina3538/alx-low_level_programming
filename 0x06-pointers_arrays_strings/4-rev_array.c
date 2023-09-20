#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The numbers of element in the array.
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{

		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}

}
