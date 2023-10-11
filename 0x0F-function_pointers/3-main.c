#include "3-calc.h"

/**
 * main - check the code for the program
 * @argc: num of args
 * @argv: args vector
 * Description: do the operator
 * Return: 0
*/

int main(int argc, char **argv)
{
	int (*op_func)(int, int), d, e;

	if (argc != 4)
		printf("Error\n"), exit(98);

	d = atoi(argv[1]);
	e = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!e && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", op_func(d, e));
	return (0);
}
