#include "main.h"

/**
 * get_bit - value of bit
 * @n: point
 * @index: the inx
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
