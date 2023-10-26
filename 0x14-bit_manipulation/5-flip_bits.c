#include "main.h"

/**
 * flip_bits - flip
 * @n: poin
 * @m: int
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int l = 0;

	while (xor)
	{
		if (xor & 1ul)
			l++;
		xor = xor >> 1;
	}
	return (l);
}
