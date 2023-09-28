#include "main.h"

int square(int n, int v);
/**
 * _sqrt_recursion - returns the natural square root
 * @n: int
 * @v: square root
 * Return: int
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int
 * @v: square root
 * Return: int
*/
int square(int n, int v)
{
	int sqrt = v * v;

	if (sqrt == n)
		return (v);
	else if (sqrt > n)
		return (-1);
	else
		return (square(n, v + 1));
}
