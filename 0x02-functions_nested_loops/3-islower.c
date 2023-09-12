#include "main.h"

/**
 * _islower - function to check if
 *		charcter is lowercase
 *
 * Oc: check input of function
 *
 * Return: returns 1 if `c` is lowercase
 *		otherwise always @ (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
