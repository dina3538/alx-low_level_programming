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
	int index = 0, sum = 0, diff_half1, diff_half2;
	char password[84];

	srand(time(0));
	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
				password[index] -= diff_half2;

				break;
			}
		}
	}
}
