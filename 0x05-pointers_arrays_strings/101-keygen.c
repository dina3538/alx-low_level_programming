#include "main.h"
#include<stdlib.h>
#include<time.h>

/**
 * main - generate randome valid password for the
 * ptogram 101_crackme.
 *
 * Return: always 0.
*/

int main(void)
{
	int num;
	char c;

	srand(time(NULL));
	while (sum >= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
