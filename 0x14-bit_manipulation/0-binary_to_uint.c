#include "main.h"

/**
 * binary_to_uint - convert binary num
 * @b: pointer to num
 * Return: converter num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int R = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		R = R * 2 + (*b - '0');
		b++;

	}
	return (R);
}

