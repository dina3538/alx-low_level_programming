#include "main.h"

/**
 * _abs - function that compute the absoulate
 *		value of an integer
 *
 * @n: take in integer type input for function
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
