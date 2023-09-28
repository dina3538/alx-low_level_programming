#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: int
 * @v: square root
 * Return: int
*/

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
{

/**
 * square - find square root
 * @n: int
 * @v: square root
 * Return: int
*/
int square(int n, int v)
{
	int square = v * v;

	if (square == n)
		return (v);
	else if (square > n)
		return (-1);
	else
		return (square(n, v + 1))
}
