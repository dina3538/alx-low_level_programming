#include "main.h"
int check_prime(int n, int ot);

/**
 * is_prime_number - check if n is prime number
 * @n: ont
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divided
 * @n: int
 * @ot: int
 * Return: int
*/

int check_prime(int n, int ot)
{
	if (ot >= n && n > 1)
		return (1);
	else if (n % ot == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, ot + 1));
}
