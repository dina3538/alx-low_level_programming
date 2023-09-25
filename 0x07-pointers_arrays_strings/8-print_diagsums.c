#include "main.h"

/**
 * print_diagsums - prints the sum of two diags
 * @a: 2d array of int type
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int fi, s1 = 0, s2 = 0;

	for (fi = 0; fi < size; fi++)
	{
		s1 += a[fi];
		s2 += a[size - fi - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
