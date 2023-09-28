#include "main.h"

/**
 * _pow_recursion - return the vslue of x rsised to the
 * power of y.
 * @x: base
 * @y: exposant
 * Return: pointer to the byte
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
