#include "main.h"

/**
 * get_endianness - check
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned long int num;

	return (*(char *)&num);
}
